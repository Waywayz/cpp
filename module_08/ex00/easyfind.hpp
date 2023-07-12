/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:06:22 by rovillar          #+#    #+#             */
/*   Updated: 2023/06/13 14:44:32 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

class NotFoundException: public std::exception {
public:

        virtual const char *what() const throw()
        {
            return ("Not found");
        }

};

template<typename T>
typename T::iterator    easyfind(T& other, int nb) {
    typename T::iterator    it_ptr;

    it_ptr = find(other.begin(), other.end(), nb);
    if (it_ptr == other.end())
        throw (NotFoundException());
    return (it_ptr);
}

#endif