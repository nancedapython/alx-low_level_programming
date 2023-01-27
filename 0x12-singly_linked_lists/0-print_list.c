#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints all the elemnts of a list_t list
 * @h: pointer to head of linked list to find the size of
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			count++;
			h = h->next;
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
			count++;
			h = h->next;
		}
	}
	return (count);
}
