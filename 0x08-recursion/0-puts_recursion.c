#include "main.h"

/**
* _puts_recursion - A function to print a string followed by a new line.
* @s: string passed to function argument
* @i - interated for the while loop
* Return: No return value.
**/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
