#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    FragTrap scav("Bob");

    scav.attack("Tom");
    scav.highFivesGuys();
    return 0;
}