#include "holberton.h"
/**
 * string_toupper - Lowercase to Uppercase
 * @c: Add variable char type
 * Return: Value c
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] > 'a' && c[i] < 'z')
			c[i] -= 32;
		i++;
	}
	return (c);
}
