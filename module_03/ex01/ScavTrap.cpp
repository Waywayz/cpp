#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    this->_name = name;
    this->_pdv = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "ScavTrap " << name << " is here!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destructed!" << std::endl;
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
