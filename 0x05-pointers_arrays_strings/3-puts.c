#include "main.h"

/**
* _puts - A function to print string
* @str: function parameter
* @i - variable
* Return: void
**/

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
