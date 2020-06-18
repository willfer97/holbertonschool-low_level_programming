#include "holberton.h"

/**
 * print_line - Function used to print lines
 * @n: n is the number to print lines
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
