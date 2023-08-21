/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 05:20:41 by rovillar          #+#    #+#             */
/*   Updated: 2023/08/22 00:26:48 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int ft_error(const std::string& error_msg)
{
    std::cerr << "RPN: error: " << error_msg << "\n";
    return 1;
}

int main(int ac, char **av)
{
    if (ac != 2)
        return ft_error("invalid number of arguments");

	else if (!RPN::valid_expression(av[1]))
        return ft_error("invalid expression");

    try {
        std::cout << RPN::calculate(av[1]) << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << "\n";
    }
    
    return 0;
}