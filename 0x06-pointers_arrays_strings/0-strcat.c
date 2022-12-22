#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: destination of concatenated text
 *@src: source of concatenated text
 *Return: results of concatenated text
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (s);

}
