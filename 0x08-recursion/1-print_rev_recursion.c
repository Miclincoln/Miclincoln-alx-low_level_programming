#include "main.h"

/**
* _print_rev_recursion - A function to print a string in reverse.
* @s: String passed to function as argument
* Return: void
**/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
