#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap ct( "DaniCaus" );

    ct.inspect();
    ct.attack( "Betinho" );
    ct.beRepaired( 20 );
}
