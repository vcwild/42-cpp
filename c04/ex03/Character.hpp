#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter {

public:
    Character();
    Character( std::string const &name );
    ~Character();

    Character &operator=( Character const &rhs );

    std::string const &getName() const;
    AMateria          *getMateria( int idx ) const;
    void               equip( AMateria *m );
    void               unequip( int idx );
    void               use( int idx, ICharacter &target );

private:
    std::string _name;
    AMateria   *_inventory[4];
    AMateria   *_stash[16];

    static int _stashIndex;
};

#endif
