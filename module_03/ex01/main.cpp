#include "ScavTrap.hpp"

int main() {
    ScavTrap scav("Bob");

    scav.attack("Tom");
    scav.takeDamage(5);
    scav.beRepaired(10);
    scav.guardGate();
    return 0;
}