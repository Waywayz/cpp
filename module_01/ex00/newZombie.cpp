#include "Zombie.hpp"

Zombie *newZombie( std::string name ) {
    Zombie *ZombieHeap = new Zombie(name);
    return (ZombieHeap);
}
