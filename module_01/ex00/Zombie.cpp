#include "Zombie.hpp"

Zombie::Zombie()
{
    this->_shout();
}

Zombie::~Zombie()
{
}

void    Zombie::_shout(void) const
{
    std::cout << "Zombie: " << "BraiiiiiiinnnzzzZ..." << std::endl;
}