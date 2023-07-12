/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:10:25 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:10:26 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal") {
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type) {
    std::cout << "WrongAnimal " << this->_type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal&    WrongAnimal::operator=(const WrongAnimal& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this->_type != other._type)
        this->_type = other._type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << this->_type << " destructor called" << std::endl;
}

std::string     WrongAnimal::getType() const {
    return this->_type;
}

void            WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal makes sound" << std::endl;
}