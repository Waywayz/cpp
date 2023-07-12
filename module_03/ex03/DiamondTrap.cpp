/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:14:05 by romain            #+#    #+#             */
/*   Updated: 2023/05/17 14:14:06 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    this->_name = name;
    this->ClapTrap::_name = this->_name + "_clap_name";
    FragTrap::_pdv = 100;
    ScavTrap::_energy = 50;
    FragTrap::_damage = 30;
    std::cout << "DiamondTrap " << this->_name << " constructed!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->_name << " is ko!" << std::endl;
}

void    DiamondTrap::whoAmI() {
    std::cout << "Hi! I'm DiamondTrap " << this->_name << " from ClapTrap " << this->ClapTrap::_name <<std::endl;
}