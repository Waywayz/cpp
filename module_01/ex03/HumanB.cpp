#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->_name = name;
    this->_weapon = NULL;
}

HumanB::~HumanB() {
}

void    HumanB::setWeapon( Weapon& weapon) {
    this->_weapon = &weapon;
}

void    HumanB::attack() const {
    std::cout << this->_name << " attack with " << this->_weapon->getType() << std::endl;
}