#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:

    int                 _number;
    static const int    _nb_bits = 8;

public:

    Fixed();
    Fixed(const int nb);
    Fixed(const Fixed& other);
    Fixed(float const value);
    Fixed   &operator=(const Fixed &other);
    bool    operator>(const Fixed &other) const;
    bool    operator<(const Fixed &other) const;
    bool    operator>=(const Fixed &other) const;
    bool    operator<=(const Fixed &other) const;
    bool    operator==(const Fixed &other) const;
    bool    operator!=(const Fixed &other) const;
    Fixed   operator+(const Fixed& other) const;
    Fixed   operator-(const Fixed& other) const;
    Fixed   operator*(const Fixed& other) const;
    Fixed   operator/(const Fixed& other) const;
    Fixed   &operator++();
    Fixed   operator++(int);
    Fixed   &operator--();
    Fixed   operator--(int);
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat() const;
    int     toInt() const;
    static Fixed    &min(Fixed &a, Fixed &b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed    &max(Fixed &a, Fixed &b);
    static const Fixed& max(const Fixed& a, const Fixed& b);

};

std::ostream&   operator<<(std::ostream& out, const Fixed& fixed);


#endif