/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 05:20:43 by rovillar          #+#    #+#             */
/*   Updated: 2023/07/28 05:47:39 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {};

RPN::RPN(const RPN &other) {
    *this = other;
}

RPN& RPN::operator=(const RPN &other) {
	(void)other;
    return *this;
}

RPN::~RPN(void) {};

static int ft_stoi(const std::string& str)
{
    int num;
    std::stringstream ss(str);

    ss >> num;
    return num;
}

bool RPN::valid_expression(const std::string& expr)
{
    if (expr.find_first_not_of("0123456789+-/* ") == std::string::npos)
	    return true;
	return false;
}

long long RPN::calculate(const std::string& expr)
{
    
}


const char*	RPN::NoResultException::what() const throw() {
	return "RPN exception: No result. Wrongly formatted expression";
}

const char*	RPN::DivisionByZeroException::what() const throw() {
	return "RPN exception: division by zero";
}