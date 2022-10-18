#include "main.h"
/**
* _isalphabet - A function that checks for alphabetic character.
* @c: Function argument.
* Return: Always 0.
**/

int _isalpha(int c)
{
	if (c > 64 && c <= 90)
	{
		return (1);
	}
	else if (c > 96 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
