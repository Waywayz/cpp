/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 05:20:46 by rovillar          #+#    #+#             */
/*   Updated: 2023/07/28 05:36:16 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <exception>

class RPN {
    
public:

    RPN();
    RPN(const RPN &other);
    RPN &operator=(const RPN &other);
    ~RPN();

    static bool         valid_expression(const std::string& expr);
    static long long    calculate(const std::string& expr);

    class NoResultException : public std::exception {
        public:
            virtual const char* what() const throw();  
    };

    class DivisionByZeroException : public std::exception {
        public:
            virtual const char* what() const throw();  
    };
};

#endif