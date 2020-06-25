#include "holberton.h"

/**
 * _strncpy - Copy with n
 * @dest: Pointer destine
 * @src: Pointer in source:
 * @n: Variable to n bytes
 * Return: dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while (src[x] && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x++] = '\0';
	}
	return (dest);
}
