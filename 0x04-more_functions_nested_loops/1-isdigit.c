#include "main.h"
/**
 * _isdigit - function that verifies if a charcter is a digit or not
 * @c: tested character
 * Return: returns function 1 if it is uppercase, 0 if noy
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
