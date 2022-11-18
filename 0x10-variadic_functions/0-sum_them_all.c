#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* sum_them_all - A variadic function to sum up all of its parameters
* @n: Function argument
* @i - Initialised for for loop
* @sum - Sum of all parameters
* Return: Returns sum
**/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, unsigned int);
		}
	}
	va_end(ap);

	return (sum);

}
