#include <iostream>
#include "Sample.hpp"

Sample::Sample(void) : foo(0) {
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" <<std::endl;
	return ;
}

void	Sample::bar(void) const {
	std::cout << "Called member function bar" << std::endl;
}
