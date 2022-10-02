#include <iostream>
#include "Sample.hpp"

int	main(void)
{
	Sample sample;

	sample.foo = 42;
	std::cout << "sample.foo " << sample.foo << std::endl;

	sample.bar();

	return 0;
}
