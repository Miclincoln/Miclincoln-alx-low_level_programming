#include "main.h"

/**
* _strlen - A fucntion to print the lenght of a string
* @s: Function parameter
* @i - Initialized for while loop
* @lenght - Variable for return value
* Return: lenght of string
**/

int _strlen(char *s)
{
	int i = 0;
	int lenght;

	while (*s != '\0')
	{
		i++;
		s++;
		lenght = i;
	}
	return (lenght);
}
