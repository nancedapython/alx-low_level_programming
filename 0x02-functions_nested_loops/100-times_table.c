#include "main.h"

/**
 * print_times_table - print the n timetable starting with 0
 *@n: a value to be computed
 * Return: Always 0 (success);
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				z = x * y;
				if (z > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(32);
					_putchar(z + '0');
				}
				if (y == n)
					continue;
			}
			_putchar('\n');
		}
	}
}

