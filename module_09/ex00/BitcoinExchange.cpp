/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:27:38 by rovillar          #+#    #+#             */
/*   Updated: 2023/07/28 05:13:14 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
    *this = other;
}


BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    this->dataBase = other.dataBase;
    return *this;
}

BitcoinExchange::~BitcoinExchange(void) {};

float ft_stof(const std::string& str)
{
    float num;
    std::stringstream ss(str);

    ss >> num;
    return num;
}


static unsigned int ft_stou(const std::string& str)
{
    unsigned int num;
    std::stringstream ss(str);

    ss >> num;
    return num;
}

void BitcoinExchange::readInternalDataBase(std::ifstream& internal_db)
{
    std::string line;
    size_t      delim;

    // skip first line
    std::getline(internal_db, line);
    while (std::getline(internal_db, line))
    {
        delim = line.find(',');
        std::string rate = line.substr(delim + 1);
        // set a new pair on the map <date, rate>
        this->dataBase[line.substr(0, delim)] = ft_stof(rate);
    }
    internal_db.close();
}


float BitcoinExchange::getRateFromDataBase(const std::string& date)
{
    if (this->dataBase.count(date) > 0)
        return this->dataBase.at(date);
    return (--this->dataBase.lower_bound(date))->second;
}

bool BitcoinExchange::isDateInCorrectFormat(const std::string &date)
{
	if (date.empty())
		return false;

 	size_t first_hyphen = date.find('-');
    size_t second_hyphen = date.find('-', first_hyphen + 1);

	if (first_hyphen == std::string::npos || second_hyphen == std::string::npos
	||  date.find_first_not_of("0123456789.-") != std::string::npos)
	{
		std::cerr << "Error: bad input => " << "\"" << date << "\"" << '\n';
		return false;
	}
	return true;
}


bool BitcoinExchange::isValidDate(const std::string& date)
{
	std::string s;
	int year, month, day;
	std::istringstream ss(date);
	int i = 0;

	while (std::getline(ss, s, '-'))
	{
		if (i == 0)
		{
			year = ft_stou(s);
			if (year < 2009 || year > 2022)
			{
				std::cerr << "Error: year is not at the database => " << "\"" << date << "\"" << '\n';
				return false;
			}
		}
		if (i == 1)
		{
			month = ft_stou(s);
			if (month < 1 || month > 12)
			{
				std::cerr << "Error: incorrect month => " << "\"" << date << "\"" << '\n';
				return false;
			}
		}
		if (i == 2)
		{
			day = ft_stou(s);
			if ((day < 1 || day > 31)
			||  (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
			||  (day > 28 && month == 2))
			{
				std::cerr << "Error: incorrect day => " << "\"" << date << "\"" << '\n';
				return false;
			}
		}
		i += 1;
	}
	if (i != 3)
	{
		std::cerr << "Error: incorrect date => " << "\"" << date << "\"" << '\n';
		return false;
	}
	return true;
}

bool BitcoinExchange::isRateInCorrectFormat(const std::string& rate)
{
	if (rate.empty() || rate.find_first_not_of("0123456789.-") != std::string::npos
	||  rate.at(0) == '.' || rate.find('.', rate.length() - 1) != std::string::npos)
		std::cerr << "Error: invalid rate => " << "\"" << rate << "\"" << '\n';
	else if (rate.at(0) == '-')
		std::cerr << "Error: not a positive number." << '\n';
	else if (rate.length() > 10 || (rate.length() == 10 && rate > "2147483647"))
		std::cerr << "Error: too large a number." << '\n';
	else
		return true;
	return false;
}

void	BitcoinExchange::sortByLine(std::ifstream& input_db, std::ifstream& internal_db)
{
	readInternalDataBase(internal_db);

	std::string line;

    // skip first line
    std::getline(input_db, line);
    while (std::getline(input_db, line))
    {
        size_t delim = line.find('|');
		if (delim == std::string::npos
		||	line.length() < delim + 2)
		{
			std::cerr << "Error: bad input => " << "\"" << line << "\"" << '\n';
			continue ;
		}

		std::string date = line.substr(0, delim - 1);
		if (!isDateInCorrectFormat(date) || !isValidDate(date))
			continue;

        std::string rate_as_str = line.substr(delim + 2);
		if (!isRateInCorrectFormat(rate_as_str))
			continue;
		float rate = ft_stof(rate_as_str);

		std::cout << date << " => " << rate << " = " << std::setprecision(2) << rate * getRateFromDataBase(date) << std::endl;
    }
	
	return ;
}