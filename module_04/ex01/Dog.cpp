/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:10:52 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:10:53 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "Constructor " << this->_type << " called" << std::endl;
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Allocation failed: " << e.what() << std::endl;
    }
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "Copy constructor " << this->_type << " called" << std::endl;
    try {
        this->_brain = new Brain(*other._brain);
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Allocation failed: " << e.what() << std::endl;
    }
}

Dog& Dog::operator=(const Dog &other) {
    if (this != &other) {
        this->_type = other._type;
        delete this->_brain;
        try {
            this->_brain = new Brain(*other._brain);
        }
        catch (const std::bad_alloc& e) {
            std::cout << "Allocation failed: " << e.what() << std::endl;
        }
    }
    return *this;
}


Dog::~Dog() {
    delete this->_brain;
    std::cout << "Destructor " << this->_type << " called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << this->_type << " says: \"Waouf\"" << std::endl;
}
