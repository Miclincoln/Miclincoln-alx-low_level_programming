#include <stdio.h>

/**
* main - Function to receive argument
* @argc: Argument count
* @argv: Argument vector
* @i - Initiated for the loop
* Return: Always 0.
**/

int main(int argc, char **argv)
{
	int i;
	(void)argv;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
