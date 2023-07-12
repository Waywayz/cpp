#include "Point.hpp"

/*
    Input: A = (0, 0), B = (10, 30), C = (20, 0), P(10, 15)
    Output: Inside
    Explanation:
    y            B(10,30)
                    / \
                   /   \
                  /     \
                 /   P   \      P'
                /         \
         A(0,0) ----------- C(20,0)     x
    Input: A = (0, 0), B = (10, 30), C = (20, 0), P(30, 15)
    Output: Outside
    Explanation:
    y            B(10,30)
                    / \
                   /   \
                  /     \
                 /       \      P
                /         \
         A(0,0) ----------- C(20,0)     x
*/

int main() {

    Point P(30, 15);
    Point A(0, 0);
    Point B(10, 30);
    Point C(20, 0);

    if (bsp(P, A, B, C) == true)
        std::cout << "Le point est a l'interieur du triangle" << std::endl;
    else
        std::cout << "Le point est a l'exterieur du triangle" << std::endl;
    return 0;
}
