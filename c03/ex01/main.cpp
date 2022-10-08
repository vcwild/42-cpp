#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ClapTrap ct( "Adorilson" );

    ct.inspect();

    std::cout << "...................................." << std::endl;

    ScavTrap st( "Gaius" );

    st.inspect();
    st.attack( "Prof Bruno" );
    st.beRepaired( 15 );

    st.guardGate();
}
