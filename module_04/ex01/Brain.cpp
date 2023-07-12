/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:10:42 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:10:43 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Constructor Brain called" << std::endl;
}

Brain::Brain(const Brain &other) {
    *this = other;
}

Brain& Brain::operator=(const Brain &other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            this->_ideas[i] = other._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Destructor Brain called" << std::endl;
}