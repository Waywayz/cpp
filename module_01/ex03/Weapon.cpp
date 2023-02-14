#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    this->_type = type;
}

Weapon::~Weapon() {
}

std::string Weapon::getType( void ) {
    std::string& stringREF = this->_type;
    return stringREF;
}

void        Weapon::setType( std::string newType ) {
    this->_type = newType;
}