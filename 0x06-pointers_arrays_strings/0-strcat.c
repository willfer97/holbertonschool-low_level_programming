#include "holberton.h"

/**
 * _strcat - Conca. strings
 * @dest: Pointer to destine
 * @src: Pointer to source
 * Return: dest value
 */
char *_strcat(char *dest, char *src)
{
	int x, c;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	c = 0;

	while (src[c] != '\0')
	{
		dest[x + c] = src[c];
		c++;
	}
	return (dest);
}
