/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:04:42 by rovillar          #+#    #+#             */
/*   Updated: 2023/06/14 16:08:13 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _n(0) {}

Span::Span(unsigned int n): _n(n) {}

Span::Span(const Span& other) {
    *this = other;
}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        this->_n = other._n;
        this->_v = other._v;
    }
    return (*this);
}

Span::~Span() {}

void    Span::addNumber(int value) {
    try {
        if (this->_v.size() >= this->_n)
            throw TooMuchCount();
        else
            this->_v.push_back(value);
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return;
}

int Span::shortestSpan() const {
    try {
        if (_v.size() < 2)
            throw TooFewCount();
        else {
            int shortest = std::numeric_limits<int>::max();
            std::vector<int> sorted(_v);
            std::sort(sorted.begin(), sorted.end());
            for (size_t i = 1; i < sorted.size(); ++i) {
                int diff = sorted[i] - sorted[i - 1];
                if (diff < shortest)
                    shortest = diff;
            }
            return shortest;
        }
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

int Span::longestSpan() const {
    try {
        if (_v.size() < 2) {
            throw TooFewCount();
        }
        int minElement = *std::min_element(_v.begin(), _v.end());
        int maxElement = *std::max_element(_v.begin(), _v.end());
        return maxElement - minElement;
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

void Span::addAll(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	try
	{
		if (std::distance(begin, end) + _v.size() > _n)
		{
			_v.insert(_v.end(), begin, begin + (_n - _v.size()));
        	throw TooMuchCount();
		}
		else
			_v.insert(_v.end(), begin, end);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Span::printSpan()
{
	std::vector<int>::iterator begin = _v.begin();
	for( int i = 0; begin != _v.end(); i++, begin++)
	{
		std::cout << " " << *(_v.begin() + i);
	}
}

const char *Span::TooFewCount::what() const _NOEXCEPT
{
	return("\033[31m\nToofewcount!!\033[0m");
}

const char* Span::TooMuchCount::what() const _NOEXCEPT
{
	return ("\033[31m\nThere are already N elements stored!!\n\033[0m");
}