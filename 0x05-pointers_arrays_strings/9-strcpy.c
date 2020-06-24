#include "holberton.h"
/**
 * *_strcpy - Pointer in a function
 * @dest: pointer used to copy
 * @src: pointer used to copy
 * Return: Value to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
