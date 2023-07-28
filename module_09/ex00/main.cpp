/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:27:29 by rovillar          #+#    #+#             */
/*   Updated: 2023/07/28 05:13:46 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static int ft_error(std::string error_msg)
{
	std::cerr << error_msg << "\n";
	return 1;
}

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
	btc.sortByLine(input_db, internal_db);
    input_db.close();
    internal_db.close();
	return 0;
}