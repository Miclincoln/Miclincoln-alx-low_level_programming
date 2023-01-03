#include "lists.h"

/**
* print_listint - A function to print all elements of a list
* @h: Pointer to head node
* @temp - Disposable pointer to head node
* Return: Number of nodes
**/

size_t print_listint(const listint_t *h)
{
	unsigned int c = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		c++;
	}
	return (c);
}

