/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:10:15 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:10:16 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
    std::cout << "Constructor " << this->_type << " called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Destructor " << this->_type << " called" << std::endl;
}

void    Dog::makeSound() const {
    std::cout << this->_type << " says: \"Waouf\"" << std::endl;
}