#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */ 
/**
 * main - entry point
 *
 * Return: always 0
 *
 */
/* betty style doc for function main goes there */
int main(void)
{	
	int n; 
	srand(time(0));	
	n = rand() - RAND_MAX / 2;	
	int last_digit = n%10;
	if (last_digit > 5)
	{
		printf("The last digit of %d is %d and i greater than 5", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("The last digit of %d is %d and is 0", n, last_digit);
	}
	else if (last_digit < 6 && last_digit > 0)
	{
		printf("The last digit of %d is %d and is less than 6 and not 0", n, last_digit);
	}
	

	/* your code goes there */	
	return (0);
}
