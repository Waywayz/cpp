#include "copyFile.hpp"
#include <iostream>
#include <string>

int main(int ac, char **av) {
    copyFile sed(av[1]);

    if (ac != 4)
        std::cerr << "Error arg" << std::endl;
    else
        sed.replace(av[2], av[3]);
    return 0;
}
