/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:10:10 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:10:11 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
    std::cout << "Constructor " << this->_type << " called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Destructor " << this->_type << " called" << std::endl;
}

void    Cat::makeSound() const {
    std::cout << this->_type << " says: \"Miaouuu\"" << std::endl;
}