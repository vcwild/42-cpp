#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
    Zombie *z       = Zombie::newZombie( name );
    z->zombiesCount = N;
    z->box          = new Zombie *[N];
    for ( int i = 0; i < N - 1; i++ ) {
        z->box[i] = Zombie::newZombie( name );
    }
    z->box[N - 1] = z;

    return z;
}

void disperseHorde( Zombie **box, int N )
{
    for ( int i = 0; i < N; i++ ) {
        delete box[i];
    }
    delete[] box;
}
