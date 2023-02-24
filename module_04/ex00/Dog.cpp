#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
    std::cout << "Constructor " << this->_type << " called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Destructor " << this->_type << " called" << std::endl;
}

void    Dog::makeSound() const {
    std::cout << this->_type << " says: \"Waouf\"" << std::endl;
}