/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:14:11 by romain            #+#    #+#             */
/*   Updated: 2023/05/17 14:14:12 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    this->_pdv = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "FragTrap " << this->_name << " was born!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->_name << " was destroyed!" << std::endl;
}

void    FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->_name << " asks for a high fives!" << std::endl;
}