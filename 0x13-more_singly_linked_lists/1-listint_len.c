#include "lists.h"

/**
* listint_len - A function to return the number of elements in a linked list
* @h: Pointer to head node
* temp - disposable pointer to head node
* Return: number of nodes in a linked list
**/

size_t listint_len(const listint_t *h)
{
	unsigned int c = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		c++;
	}
	return (c);
}
