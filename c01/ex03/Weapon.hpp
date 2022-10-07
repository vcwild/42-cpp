#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

public:
    Weapon( std::string type );
    ~Weapon();

    void               setType( std::string type );
    std::string const &getType() const;

private:
    std::string _type;

    std::string _genRandomWeaponType( void );
};

#endif
