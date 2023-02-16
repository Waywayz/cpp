#include "Fixed.hpp"

Fixed::Fixed(): _number(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb) {
    std::cout << "Int constructor called" << std::endl;
    this->_number = nb << this->_nb_bits;
}

Fixed::Fixed(float const value) {
    std::cout << "Float constructor called" << std::endl;
    this->_number = (int)roundf(value * (1 << this->_nb_bits));
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    this->_number = other.getRawBits();
}

Fixed&          Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_number = other.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int             Fixed::getRawBits( void ) const{
    return this->_number;
}

void            Fixed::setRawBits( int const raw ) {
    this->_number = raw;
}

float           Fixed::toFloat( void ) const {
    return static_cast<float>(this->_number) / (1 << this->_nb_bits);
}

int             Fixed::toInt( void ) const {
    return static_cast<int>(this->_number) >> this->_nb_bits;
}

std::ostream&   operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}