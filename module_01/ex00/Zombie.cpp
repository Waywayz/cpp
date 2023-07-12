#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {
    this->_name = name;
}

Zombie::~Zombie() {
    std::cout << this->_name << " has been detroy" << std::endl;
}

void    Zombie::annouce() const {
    std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}