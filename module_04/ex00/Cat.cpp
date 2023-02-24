#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
    std::cout << "Constructor " << this->_type << " called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Destructor " << this->_type << " called" << std::endl;
}

void    Cat::makeSound() const {
    std::cout << this->_type << " says: \"Miaouuu\"" << std::endl;
}