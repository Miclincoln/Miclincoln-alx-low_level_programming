#include "main.h"
/**
* _isupper - A function to check for uppercase character
* @c: Function argument
* @a - Local variable
* @b - Local variable
* Return: returns an int
**/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
