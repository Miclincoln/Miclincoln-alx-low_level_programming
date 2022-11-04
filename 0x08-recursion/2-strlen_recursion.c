#include "main.h"

/**
* _strlen_recursion - A functon to print the lenght of a string
* @s: String passed to function as argument
* @lenght - return value
* Return: result
**/

int _strlen_recursion(char *s)
{
	int lenght = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		lenght += _strlen_recursion(s + 1);
	}
	return (lenght);
}
