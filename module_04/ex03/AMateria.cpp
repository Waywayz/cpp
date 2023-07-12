#include "AMateria.hpp"

AMateria::AMateria() {
}

AMateria::AMateria(std::string const& type): _type(type) {
}

AMateria::AMateria(const AMateria &other) {
    *this = other;
}

AMateria&    AMateria::operator=(const AMateria& other) {
    if (this->_type != other._type)
        this->_type = other._type;
    return *this;
}

AMateria::~AMateria() {
}

std::string const & AMateria::getType() const {
    return this->_type;
}

AMateria*    AMateria::clone() const {
    return (AMateria*)this;
}

void    AMateria::use(ICharacter& target) {
    // a remplir !
}