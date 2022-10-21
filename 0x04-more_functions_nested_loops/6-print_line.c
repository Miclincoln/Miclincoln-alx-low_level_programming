#include "main.h"
/**
* print_line - A function to draw a straight line in the terminal
* @n: Function argument
* @a - initialized for the conditional statement
* return: no return value
*
**/

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
