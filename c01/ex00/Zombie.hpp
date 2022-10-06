#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {

public:
    Zombie( std::string name );
    ~Zombie();

    void           announce( void );
    static Zombie *newZombie( std::string name );
    static void    randomChump( std::string name );

private:
    std::string        _name;
    static std::string _genZombieName( void );
};

#endif
