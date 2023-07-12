/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:10:47 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:10:48 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
    std::cout << "Constructor " << this->_type << " called" << std::endl;
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Allocation failed: " << e.what() << std::endl;
    }
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Copy constructor " << this->_type << " called" << std::endl;
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Allocation failed: " << e.what() << std::endl;
    }
}


Cat& Cat::operator=(const Cat &other) {
    if (this != &other) {
        this->_type = other._type;
        delete this->_brain;
        try {
        this->_brain = new Brain();
        }
        catch (const std::bad_alloc& e) {
            std::cout << "Allocation failed: " << e.what() << std::endl;
        }
    }
    return *this;
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << "Destructor " << this->_type << " called" << std::endl;
}

void    Cat::makeSound() const {
    std::cout << this->_type << " says: \"Miaouuu\"" << std::endl;
}