#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

public:
    ClapTrap();
    ClapTrap( std::string name );
    ~ClapTrap();

    ClapTrap &operator=( ClapTrap const &right );

    void attack( const std::string &target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );
    void inspect( void );

protected:
    std::string  _name;
    unsigned int _hp;
    unsigned int _energy;
    unsigned int _damage;
    std::string  _type;

    std::string  getName() const;
    std::string  getType() const;
    unsigned int getHp() const;
    unsigned int getEnergy() const;
    unsigned int getDamage() const;
};

#endif