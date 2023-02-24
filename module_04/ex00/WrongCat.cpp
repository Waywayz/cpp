#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat") {
    std::cout << "Constructor " << this->_type << " called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Destructor " << this->_type << " called" << std::endl;
}

void    WrongCat::makeSound() const {
    std::cout << this->_type << " says: \"Miaouuu\"" << std::endl;
}