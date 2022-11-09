#include "main.h"
#include <stdlib.h>
/**
* create_array - A fucntion to create an arrays of chars
* @a - Pointer
* @i - initialized for loop
* @size: Function argument
* @c: Fucntion argument
* Return: a
**/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * sizeof(*a));

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
		return (a);
}
