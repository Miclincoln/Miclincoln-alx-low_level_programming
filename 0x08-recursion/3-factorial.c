#include "main.h"

/**
* factorial - A fucntion to print factorial of a given number
* @n: Integer passed to function as argument
* @fact - return value
* Return: fact
**/

int factorial(int n)
{
	int fact;

	if (n > 0)
	{
		fact = n * factorial(n - 1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (fact);
}
