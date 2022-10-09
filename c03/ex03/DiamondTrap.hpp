#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public:
    DiamondTrap();
    DiamondTrap( std::string name );
    DiamondTrap( DiamondTrap const &instance );
    ~DiamondTrap();

    void whoAmI( void );

private:
    std::string _name;
};

#endif
