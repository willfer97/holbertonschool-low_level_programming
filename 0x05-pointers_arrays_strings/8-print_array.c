#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Function to prints arrays
 * @a: integrer to array
 * @n: numbers to array
 */
void print_array(int *a, int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
		x++;
	}
	putchar('\n');
}
