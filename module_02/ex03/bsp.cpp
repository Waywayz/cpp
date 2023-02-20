#include "Point.hpp"

static Fixed   abs(Fixed x) {
    if (x < 0)
        return x * -1;
    return x;
}

static Fixed    getArea(Point a, Point b, Point c) {
    return (((a.getX() * (b.getY() - c.getY()))
            + b.getX() * (c.getY() - a.getY())
            + c.getX() * (a.getY() - b.getY())) / 2);
}

bool            bsp(const Point p, const Point a, const Point b, const Point c) {
    Fixed ABC = abs(getArea(a, b, c));
    Fixed PAB = abs(getArea(p, a, b));
    Fixed PBC = abs(getArea(p, b, c));
    Fixed PAC = abs(getArea(p, a, c));
    return (ABC == PAB + PBC + PAC);
}