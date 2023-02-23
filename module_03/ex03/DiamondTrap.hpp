#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{

private:

    std::string _name;

public:

    DiamondTrap(std::string name);
    ~DiamondTrap();

    void    whoAmI();
    using   ScavTrap::attack;
};

#endif