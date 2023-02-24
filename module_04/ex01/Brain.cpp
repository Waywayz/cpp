#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Constructor Brain called" << std::endl;
}

Brain::Brain(const Brain &other) {
    *this = other;
}

Brain& Brain::operator=(const Brain &other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            this->_ideas[i] = other._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Destructor Brain called" << std::endl;
}