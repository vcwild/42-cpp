#include <iostream>
#include "Sample.hpp"

Sample::Sample(void) {
	std::cout << "Constructor called" << std::endl;

	this->foo = 42;
	this->bar();
	return ;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" <<std::endl;
	return ;
}

void	Sample::bar(void) {
	std::cout << "Called member function bar" << std::endl;
}
