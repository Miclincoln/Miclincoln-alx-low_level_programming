#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - A fucntion to free a list
* free - free mallocs
* @head: pointer to node
* @tmp - disposable pointer
* Return: void
**/

void free_list(list_t *head)

{
	while (head != NULL)
	{
		list_t *tmp = head;

		free(head->str);
		head = head->next;
		free(tmp);
	}
}

