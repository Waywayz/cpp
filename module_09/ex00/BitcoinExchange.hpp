/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:27:17 by rovillar          #+#    #+#             */
/*   Updated: 2023/07/28 05:13:09 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <string>

class BitcoinExchange
{

private:

    std::map<std::string, float> dataBase;

public:

    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& other);
    BitcoinExchange& operator=(const BitcoinExchange& other);
    ~BitcoinExchange();

    void    readInternalDataBase(std::ifstream& internal_db);
    float   getRateFromDataBase(const std::string& date);
    bool    isDateInCorrectFormat(const std::string& date);
    bool    isValidDate(const std::string& date);
    bool    isRateInCorrectFormat(const std::string& rate);
    void    sortByLine(std::ifstream& input_db, std::ifstream& internal_db);
};

#endif