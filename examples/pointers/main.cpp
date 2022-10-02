#include <iostream>
#include "Sample.hpp"

void displayFoo(Sample *sample) {
		std::cout << "Value of member foo is: " << sample->foo << std::endl;
}

int	main(void)
{
	Sample	sample; // The sample instance
	Sample	*psample = &sample; // A pointer to the sample instance
	int			Sample::*p = NULL; // Declare pointer `p` of type Sample attribute and init to NULL;
	void		(Sample::*f)(void) const; // Declare a function of type `Sample function member const`;

	p = &Sample::foo; // p now references the Sample attribute `foo`
	displayFoo(&sample);
	sample.*p = 21; // Use the `.*` operator to change the `p` pointer of the sample instance
	displayFoo(&sample);
	psample->*p = 42; // Change the pointer reference value to 42
	displayFoo(&sample);

	f = &Sample::bar; // f now references the Sample function member `bar`
	(sample.*f)(); // Execute bar via instance
	(psample->*f)(); // Execute bar via pointer

	return 0;
}
