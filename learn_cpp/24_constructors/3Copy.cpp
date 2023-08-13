#include "MyClass.hpp"

int	main(void)
{
	MyClass	mos;

	mos.insertBrain("Red");
	mos.insertBrain("Green");
	mos.insertBrain("Blue");
	mos.prtSize();
	mos.prtBrain();

	MyClass mac = mos;
	mac.prtBrain();
}