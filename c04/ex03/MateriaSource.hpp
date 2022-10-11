#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:
    MateriaSource();
    MateriaSource( MateriaSource const &src );
    virtual ~MateriaSource();

    MateriaSource &operator=( MateriaSource const &rhs );

    void      learnMateria( AMateria *m );
    AMateria *createMateria( std::string const &type );
    AMateria *getMateria( int idx ) const;

private:
    AMateria  *_materia[4];
    static int _materiaCount;
};

typedef MateriaSource MS;

#endif
