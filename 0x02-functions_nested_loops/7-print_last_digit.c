#include "main.h"

/**
* print_last_digit - A function that prints the last digit of a number
* @n: Function argument
* Return: returns an int.
**/

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = -1 * n % 10;
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		ld = n % 10;
		_putchar(ld + '0');
		return (ld);
	}
}
