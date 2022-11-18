#include <unistd.h>

/**
* _putchar - a function to print to std out
* @c: Function argument
* Return: write to the output
**/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
