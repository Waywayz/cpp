/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:10:35 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:10:36 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal") {
    std::cout << "Constructor Animal called" << std::endl;
}

Animal::Animal(std::string type): _type(type) {
    std::cout << "Animal " << this->_type << " constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Animal&    Animal::operator=(const Animal& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this->_type != other._type)
        this->_type = other._type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Destructor Animal called" << std::endl;
}

std::string Animal::getType() const {
    return this->_type;
}

void    Animal::makeSound() const {
    std::cout << "Animal makeSound called" << std::endl;
}