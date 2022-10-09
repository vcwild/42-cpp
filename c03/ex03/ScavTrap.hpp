#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:
    ScavTrap();
    ScavTrap( std::string name );
    ScavTrap( ScavTrap const &instance );
    ~ScavTrap();

    ScavTrap &operator=( ScavTrap const &right );

    void guardGate();
};

#endif
