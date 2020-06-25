#include "holberton.h"
/**
 * _strncat - concate two integers with n
 * @dest: destine
 * @src: source
 * @n: its bytes
 * Return: value of dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	int x, c;

	c = 0;
	while (dest[c] != '\0')
		c++;

	x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x + c] = src[x];
		x++;
	}
	return (dest);
}
