#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie(){
}

void    Zombie::announce() const {
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::nameZombie( std::string name ) {
    this->_name = name;
}