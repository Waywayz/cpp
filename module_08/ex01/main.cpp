/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:26:39 by rovillar          #+#    #+#             */
/*   Updated: 2023/06/14 16:06:26 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::string white_code = "\001\033[1m\033[37m\002";
	std::string reset_code = "\001\033[0;0m\002";
	
	std::cout << white_code << "----AaddNumber() TEST-----" << reset_code << std::endl;
	Span sp1(8);
	sp1.addNumber(10);
	sp1.addNumber(20);
	sp1.addNumber(30);
	sp1.addNumber(40);
	std::cout << "sp1: ";
	sp1.printSpan();

	std::cout << white_code << "\n\n----fill_all() TEST - 1-----" << reset_code << std::endl;
	std::vector<int> v1;
	v1.push_back(55);
	v1.push_back(63);
	v1.push_back(66);
	v1.push_back(18);
	v1.push_back(32);
	v1.push_back(100);
	sp1.addAll(v1.begin(), v1.end());
	std::cout << "sp1: ";
	sp1.printSpan();

	std::cout << white_code << "\n\n----range TEST-1-----" << reset_code << std::endl;
	std::cout << "sp1-short: " << sp1.shortestSpan()	<< std::endl;
	std::cout << "sp1-long: " << sp1.longestSpan()	<< std::endl;
	
	std::cout << white_code << "\n\n----range TEST-2-----" << reset_code << std::endl;
	Span sp2(23);
	std::cout << "sp2-short: " << sp2.shortestSpan() << std::endl;
	std::cout << "sp2-long:	" << sp2.longestSpan()	<< std::endl;
	sp2.addNumber(42);
	std::cout << "sp2-short: " << sp2.shortestSpan() << std::endl;
	std::cout << "sp2-long: " << sp2.longestSpan()	<< std::endl;

	std::cout << white_code << "\n----RANDOM TEST-----" << reset_code << std::endl;	
	Span sp3(10000);
	std::vector<int> v2;
	std::srand(std::time(NULL));
	int val;
	for (int i = 0; i <= 150; i++)
	{
		if (i % 2 == 0)
			val = (std::rand() % (i + 10));
		else if (i % 2 == 1)
			val = (std::rand() % (i + 100));
		v2.push_back(val);
	}
	sp3.addAll(v2.begin(), v2.end());
	std::cout << "sp3: ";
	sp3.printSpan();

	std::cout << white_code << "\n\n----range TEST-3-----" << reset_code << std::endl;
	std::cout << "sp3-short: " << sp3.shortestSpan() << std::endl;
	std::cout << "sp3-long: " << sp3.longestSpan()	<< std::endl;

	return 0;
}