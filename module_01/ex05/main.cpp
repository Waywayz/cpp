#include "Harl.hpp"

int main( void ) {
    std::string input;
    Harl        harl;
    
    do {
        std::cout << "ENTER A LEVEL: ";
        std::cin >> input;
        harl.complain(input);
    }   while (input.compare("exit"));
}