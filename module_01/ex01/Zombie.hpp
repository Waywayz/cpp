#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <limits>

class Zombie
{
private :

    std::string _name;

public :

    Zombie();
    ~Zombie();

    void        announce();
    void        nameZombie( std::string name );
};

Zombie*     zombieHorde( int N, std::string name );

#endif