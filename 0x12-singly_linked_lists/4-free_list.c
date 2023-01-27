#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees up a node in a linked list
 * @head: head of the linked list
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
