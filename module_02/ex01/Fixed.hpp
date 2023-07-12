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
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat() const;
    int     toInt() const;

};

std::ostream&   operator<<(std::ostream& out, const Fixed& fixed);

#endif