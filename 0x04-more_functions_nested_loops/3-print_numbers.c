#include "main.h"

/**
* print_numbers - A function to print numbers (0 - 9)
* @i - initialise for for loop
* Returns - void
**/

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
