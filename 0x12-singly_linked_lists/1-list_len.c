#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints length of a list
 * @h: pointer to head of linked list to find the size of
 * Return: number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
