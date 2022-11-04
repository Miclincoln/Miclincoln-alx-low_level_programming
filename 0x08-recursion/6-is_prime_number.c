#include "main.h"

/**
* is_divisible - Tests if the number is divisible
* @n: number being tested
* @div: the divisor
* Return: result
**/

int is_divisible(int n, int div)
{
	if (n % div == 0)
	{
		return (0);
	}
	else if (div == n / 2)
	{
		return (1);
	}
	return (is_divisible(n, div + 1));
}

/**
* is_prime_number - A function to check for prime number
* @n: The number being tested
* Return: result
**/
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	return (is_divisible(n, div));
}
