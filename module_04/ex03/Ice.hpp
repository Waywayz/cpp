#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{

private:

public:

    Ice();
    Ice(const Ice& other);
    Ice& operator=(const Ice& other);
    ~Ice();

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);

};

#endif