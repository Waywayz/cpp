/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 05:20:43 by rovillar          #+#    #+#             */
/*   Updated: 2023/08/17 12:26:10 by rovillar         ###   ########.fr       */
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
    int left;
    int right;
    int result;
    std::stringstream postfix(expr);
    std::stack<int> temp;
    std::string s;

    while (postfix >> s)
    {
        if (s == "+" || s == "-" || s == "/" || s == "*")
        {
            if (temp.size() < 2)
                throw NoResultException();                
            // Pull out top two elements
            right = temp.top();
            temp.pop();
            left = temp.top();
            temp.pop();
            switch (s.at(0))
            {
                case '+': result =  left + right ; break;
                case '-': result =  left - right ; break;
                case '/':
                    if (right != 0)
                        result =  left / right; 
                    else
                        throw DivisionByZeroException();
                break;
                case '*': result =  left * right ; break;
            }
            temp.push(result);
        }
        else
            temp.push(ft_stoi(s));
    }
	return temp.top();
}


const char*	RPN::NoResultException::what() const throw() {
	return "RPN exception: No result. Wrongly formatted expression";
}

const char*	RPN::DivisionByZeroException::what() const throw() {
	return "RPN exception: division by zero";
}