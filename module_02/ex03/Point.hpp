#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{

private:

    const Fixed _x;
    const Fixed _y;

public:

    Point();
    Point(const float x, const float y);
    Point(const Point &other);
    ~Point();

    Point   &operator=(const Point &other);
    Fixed   getX() const;
    Fixed   getY() const;

};

bool    bsp(const Point p, const Point a, const Point b, const Point c);

#endif