/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 05:03:17 by rovillar          #+#    #+#             */
/*   Updated: 2023/06/10 01:46:41 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	std::cout << "TEST INT" << std::endl;
	int a = 2;
	int b = 3;
	::swap<int>(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << "\nTEST STRING " << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap<std::string>(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "\nTEST FLOAT" << std::endl;
	float a1 = 3.46;
	float b1 = 2;
	::swap(a1,b1);
	std::cout << "a = " << a1 << ", b = " << b1 << std::endl;
	std::cout << "min( a1, b1 ) = " << ::min( a1, b1 ) << std::endl;
	std::cout << "max( a1, b1 ) = " << ::max( a1, b1 ) << std::endl;

	std::cout << "\nTEST DOUBLE" << std::endl;
	double a2 = 3.14;
	double b2 = 2.71828;
	::swap(a2,b2);
	std::cout << "a = " << a2 << ", b = " << b2 << std::endl;
	std::cout << "min( a, b ) = " << ::min( a2, b2 ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a2, b2 ) << std::endl;
	return 0;
}