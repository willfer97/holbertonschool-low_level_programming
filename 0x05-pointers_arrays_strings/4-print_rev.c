#include "holberton.h"
/**
 * print_rev - Function used to pointer
 * @s: Variable type char
 */
void print_rev(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}

	s--;

	while (x != 0)
	{
		_putchar(*s);
		s--;
		x--;
	}
	_putchar('\n');
}
