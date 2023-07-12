/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:13:55 by romain            #+#    #+#             */
/*   Updated: 2023/05/17 14:13:56 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    this->_pdv = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "ScavTrap " << name << " is here!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " was destructed!" << std::endl;
}

void    ScavTrap::attack(const std::string& target) {
    if (this->_energy < 1) {
        std::cout << "ScavTrap " << this->_name << " needs energy!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " attack " << target << ", for " << this->_damage << " points of damage!" << std::endl;
    this->_energy--;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is in guard gate mode!" << std::endl;
}
