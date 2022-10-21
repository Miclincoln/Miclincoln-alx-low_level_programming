#include "main.h"
/**
* print_diagonal - A function that draws a diagonal line on the terminal
* @n: function argument
* @a - aditional argument
* @b - aditional argument
* return - no return value
**/

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
