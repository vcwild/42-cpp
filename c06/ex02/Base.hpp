#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>

class Base {

public:
    virtual ~Base();

private:
};

/**
 * @brief It randomly instanciates A, B or C and returns the instance as a
 * Base pointer.
 *
 * @return Base*
 */
Base *generate( void );

/**
 * @brief It prints the actual type of the object pointed to by p: "A", "B"
 * or "C".
 *
 * @param p
 */
void identify( Base *p );

/**
 * @brief It prints the actual type of the object referenced to by p: "A", "B"
 * or "C"
 *
 * @param p
 */
void identify( Base &p );

#endif
