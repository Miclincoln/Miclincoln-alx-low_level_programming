#include "main.h"

/**
* swap_int - A function that swaps the value of two integers
* @a: Function parameter
* @b: Fucntion parameter
* Return: void
**/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;

}
