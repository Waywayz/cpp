/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 02:25:18 by rovillar          #+#    #+#             */
/*   Updated: 2023/06/10 02:32:16 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{

private:

    T* _elements;
    unsigned int _arraySize;

public:

    Array() : _elements(NULL), _arraySize(0) {}
    
    Array(unsigned int n) : _elements(new T[n]), _arraySize(n) {}
    
    Array(const Array& other) : _elements(new T[other._arraySize]), _arraySize(other._arraySize) {
        for (unsigned int i = 0; i < _arraySize; i++) {
            _elements[i] = other._elements[i];
        }
    }

    Array& operator=(const Array& other) {
        if (this != &other)
        {
            delete[] _elements;
            _elements = new T[other._arraySize];
            _arraySize = other._arraySize;
            for (unsigned int i = 0; i < _arraySize; i++) {
                _elements[i] = other._elements[i];
            }
        }
        return *this;
    }

    ~Array() {
        delete[] _elements;
    }

    unsigned int size() const {
        return _arraySize;
    }

    T& operator[](unsigned int index) {
        if (index >= _arraySize) {
            throw std::out_of_range("Index out of range");
        }
        return _elements[index];
    }
};

#endif
