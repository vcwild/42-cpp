/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwildner <vwildner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:05:31 by vwildner          #+#    #+#             */
/*   Updated: 2022/10/23 11:44:21 by vwildner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

int MS::_materiaCount = 0;

MS::MateriaSource()
{
    for ( int i = 0; i < 4; i++ ) {
        this->_materia[i] = NULL;
    }
    std::cout << "MateriaSource constructor called" << std::endl;
}

MS::MateriaSource( MS const &src )
{
    *this = src;
    std::cout << "MateriaSource constructor called" << std::endl;
}

MS::~MateriaSource()
{
    for ( int i = 0; i < 4; i++ ) {
        delete this->_materia[i];
    }
    std::cout << "MateriaSource destructor called" << std::endl;
}

MS &MS::MateriaSource::operator=( MS const &rhs )
{
    AMateria *rhsMateria;

    for ( int i = 0; i < MS::_materiaCount; i++ ) {
        delete this->_materia[i];
    }

    for ( int i = 0; i < MS::_materiaCount; i++ ) {
        rhsMateria        = rhs.getMateria( i );
        this->_materia[i] = rhsMateria->clone();
    }

    return *this;
}

AMateria *MS::getMateria( int idx ) const
{
    if ( idx < 0 || idx >= MS::_materiaCount ) {
        return NULL;
    }
    return this->_materia[idx];
}

void MS::learnMateria( AMateria *m )
{
    if ( MS::_materiaCount < 4 ) {
        MS::_materia[MS::_materiaCount++] = m;
        return;
    }

    std::cout << "MateriaSource::learnMateria: No more space to learn "
                 "materia."
              << std::endl;
}

AMateria *MS::createMateria( std::string const &type )
{
    for ( int i = 0; i < this->_materiaCount; i++ ) {
        if ( this->_materia[i]->getType() == type ) {
            return this->_materia[i]->clone();
        }
    }

    std::cout << "MateriaSource::createMateria: No materia of type " << type
              << " found." << std::endl;

    return NULL;
}
