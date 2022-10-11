#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
class AMateria;
#include "ICharacter.hpp"

class AMateria {
private:
    AMateria();

public:
    AMateria( std::string const &type );
    virtual ~AMateria();

    std::string const &getType() const;
    virtual AMateria  *clone() const = 0;
    virtual void       use( ICharacter &target );

protected:
    std::string _type;
};

#endif
