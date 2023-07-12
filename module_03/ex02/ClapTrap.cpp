/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:13:41 by romain            #+#    #+#             */
/*   Updated: 2023/05/17 14:13:42 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _pdv(10), _energy(10), _damage(0) {
    std::cout << "ClapTrap " << name << " was create!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap&   ClapTrap::operator=( const ClapTrap& other ) {
    this->_name = other._name;
    this->_pdv = other._pdv;
    this->_energy = other._energy;
    this->_damage = other._damage;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_name << " was deleted!" << std::endl;
}

void    ClapTrap::attack(const std::string& target) {
    if (this->_energy < 1) {
        std::cout << "ClapTrap " << this->_name << " needs energy!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attack " << target << " causing " << this->_damage << " points of damage!" << std::endl;
    this->_energy--;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    this->_pdv -= amount;
    if (this->_pdv < 1) {
        std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage!" << std::endl;
        std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energy < 1) {
        std::cout << "ClapTrap " << this->_name << " needs energy!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount << " hit points!" << std::endl;
    this->_energy--;
    this->_pdv += amount;
}