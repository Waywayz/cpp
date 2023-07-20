/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:59:01 by rovillar          #+#    #+#             */
/*   Updated: 2023/07/20 20:16:24 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <list>
#include <numeric>
#include <limits>
#include <ctime>

class Span
{

private:

    std::vector<int>    _v;
    unsigned int        _n;

public:

    Span();
    Span(unsigned int n);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    void    addNumber(int value);
    int     shortestSpan()const ;
    int     longestSpan()const ;
    void	addAll( std::vector<int>::iterator begin, std::vector<int>::iterator end);
    void	printSpan(void);

	class TooMuchCount: public std::exception
	{
  		public:
    		virtual const char* what() const throw();
	};

	class TooFewCount: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

#endif