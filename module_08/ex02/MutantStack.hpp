/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:41:58 by rovillar          #+#    #+#             */
/*   Updated: 2023/06/14 15:55:56 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <list>
#include <vector>
#include <deque>

template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T>
{

public:

    typedef typename std::stack<T>::container_type::iterator iterator;

    MutantStack(): std::stack<T>() {}
    MutantStack(const MutantStack& other): std::stack<T>(other) {}
    MutantStack& operator=(const MutantStack& other) {
        std::stack<T>::operator=(other);
        return *this;
    }
    ~MutantStack() {}
    
    iterator begin() {
        return std::stack<T>::c.begin();
    }
    iterator end() {
        return std::stack<T>::c.end();
    }
};

#endif