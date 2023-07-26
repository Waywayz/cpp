/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:27:29 by rovillar          #+#    #+#             */
/*   Updated: 2023/07/26 04:11:59 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static int ft_error(std::string error_msg)
{
	std::cerr << error_msg << "\n";
	return 1;
}

float ft_stof(const std::string& str);

int main(int argc, char **argv)
{
	if (argc != 2)
		return ft_error("Error: could not open file");

	std::ifstream input_db(argv[1], std::ifstream::in);
	if (!input_db.is_open())
		return ft_error("Error: could not open file");

    std::ifstream internal_db("./data.csv", std::ifstream::in);
	if (!internal_db.is_open())
		return ft_error("Error: fatal: could not open internal database file");

	BitcoinExchange btc;
	btc.readInternalDataBase(internal_db);

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
		if (!btc.isDateInCorrectFormat(date) || !btc.isValidDate(date))
			continue;

        std::string rate_as_str = line.substr(delim + 2);
		if (!btc.isRateInCorrectFormat(rate_as_str))
			continue;
		float rate = ft_stof(rate_as_str);

		std::cout << date << " => " << rate << " = " << std::setprecision(2) << rate * btc.getRateFromDataBase(date) << std::endl;
    }
    input_db.close();
    internal_db.close();
	return 0;
}