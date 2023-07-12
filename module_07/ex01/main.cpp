/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 01:49:12 by rovillar          #+#    #+#             */
/*   Updated: 2023/06/10 01:58:58 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    std::cout << "INT ARRAY" << std::endl;
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArraySize = sizeof(intArray) / sizeof(int);
    iter(intArray, intArraySize, printElement<int>);
    std::cout << std::endl;

    std::cout << "\nCHAR ARRAY" << std::endl;
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    size_t charArraySize = sizeof(charArray) / sizeof(char);
    iter(charArray, charArraySize, printElement<char>);
    std::cout << std::endl;

    return 0;
}