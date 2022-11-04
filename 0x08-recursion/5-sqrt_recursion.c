#include "main.h"

/**
* _sqrt - A function to find sqaure root
* @prev: Function argument
* @root: Function argument
* Return: square root
**/

int _sqrt(int prev, int root)
{
	if (prev > root)
	{
		return (-1);
	}
	else if (prev * prev == root)
	{
		return (prev);
	}
	return (_sqrt(prev + 1, root));
}

/**
* _sqrt_recursion - A function to find the perfect square root
* @n: Function argument
* Return: Perfect square root
**/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(1, n));
}
