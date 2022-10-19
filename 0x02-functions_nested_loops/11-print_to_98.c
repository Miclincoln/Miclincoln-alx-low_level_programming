#include "main.h"
#include <stdio.h>
/**
* print_to_98 - A function that print all natural number from n to 98
* @n: Function argument
* Return: no return value
*
*
**/

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			if (i < 98)
			{
				printf("%d", i);
				printf(", ");
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 99; i--)
		{
			if (n > 98)
			{
				printf("%d", i);
				printf(", ");
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
