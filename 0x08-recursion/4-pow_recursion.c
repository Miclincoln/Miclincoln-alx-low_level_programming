#include "main.h"

/**
* _pow_recursion - A fucntion to print the power of a number
* @x: Int passed to function as argument
* @y: Int passed to function as argument
* @pow - Return value
* Return: (pow) x to the power of y
**/

int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
		pow = x * _pow_recursion(x, y - 1);
	}
	return (pow);
}
