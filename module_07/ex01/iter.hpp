/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 01:49:10 by rovillar          #+#    #+#             */
/*   Updated: 2023/06/10 01:51:52 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* array, size_t size, void (*func)(T&))
{
    for (size_t i = 0; i < size; ++i)
    {
        func(array[i]);
    }
}

template <typename T>
void printElement(T& element)
{
    std::cout << element << " ";
}

#endif