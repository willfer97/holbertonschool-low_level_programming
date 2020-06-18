#include "holberton.h"

/**
 * print_diagonal - Function used to print diagonal
 * @n: Variable used in this function
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (y = 1; y <= n; y++)
		{
			for (x = 1; x <= y; x++)
			{
				if (x != 1)
					_putchar(' ');
				if (x == y)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
