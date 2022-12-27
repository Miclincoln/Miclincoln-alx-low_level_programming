#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_list - A fucntion to free a list
* @head: pointer to node
* @tmp: disposable pointer
* free - free mallocs
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

