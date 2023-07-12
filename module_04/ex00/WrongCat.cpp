/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:10:29 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:10:30 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {
    std::cout << "Constructor " << this->_type << " called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Destructor " << this->_type << " called" << std::endl;
}

void    WrongCat::makeSound() const {
    std::cout << this->_type << " says: \"Miaouuu\"" << std::endl;
}