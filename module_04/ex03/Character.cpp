#include "Character.hpp"

Character::Character(std::string name): _name(name) {
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(const Character &other) {
    *this = other;
}

Character&  Character::operator=(const Character &other) {
    if (this != &other) {
        this->_name = other._name;
        for (int i = 0; i < 4; i++)
            this->_inventory[i] = other._inventory[i];
    }
    return *this;
}

Character::~Character() {
}
