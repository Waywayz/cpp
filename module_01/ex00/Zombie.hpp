#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:

    std::string _name;
    void        _shout(void) const;

public:

    Zombie();
    ~Zombie();
};

#endif