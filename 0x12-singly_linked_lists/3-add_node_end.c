#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string to find the length of.
 * Return: (Success)
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to head of linked list to find the size of
 * @str: string to insert into the node of the linked listd
 * Return: number of nodes in the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *last = *head;

	tmp = (malloc(sizeof(list_t)));
	if (!tmp)
		return (NULL);
	if (*head == NULL)

	{
		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		tmp->next = NULL;
		*head = tmp;
		return (*head);
	}
	do {
		if (last->next == NULL)
		{
			last->next = tmp;
			tmp->next = NULL;
			tmp->str = strdup(str);
			tmp->len = _strlen(str);
			return (*head);
		}
		last = last->next;
	} while (last);
	free(tmp);
	return (*head);
}
