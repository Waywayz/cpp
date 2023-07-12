#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character
{

private:

    std::string _name;
    AMateria    *_inventory[4];

public:

    Character(std::string name);
    Character(const Character& other);
    Character&  operator=(const Character& other);
    ~Character();

};

#endif