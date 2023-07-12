/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 01:53:58 by rovillar          #+#    #+#             */
/*   Updated: 2023/06/09 01:18:38 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./ScalarConverter [input]" << std::endl;
		return (0);
	}
	ScalarConverter::convert(std::string(argv[1]));
}