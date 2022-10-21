#include "main.h"
/**
* more_numbers - A function to print numbers(0 - 14) 10 times
* @i - variable
* @a - variable
* return - no return value
**/

void more_numbers(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
			{
				_putchar(a / 10 + '0');
			}
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}

