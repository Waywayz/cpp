#include "Zombie.hpp"

int main( void ) {
    std::string name;

    std::cout << "ENTER NAME OF YOUR ZOMBIE ON STACK > ";
    std::cin >> name;

    Zombie  ZombieStack(name);
    ZombieStack.annouce();

    std::cout << "ENTER NAME OF YOUR ZOMBIE ON HEAP > ";
    std::cin >> name;

    Zombie  *ZombieHeap = newZombie(name);
    ZombieHeap->annouce();
    delete ZombieHeap;

    randomChump("Toto");

    return 0;
}