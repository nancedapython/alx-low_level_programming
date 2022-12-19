#include "main.h"

/**
* _strlen - returns the length of a string
* @s: this is the input string
* Return: Length of a string
*/
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
