#include "holberton.h"
/**
 * rev_string - Function to reverse string
 * @s: imput to reverse string.
 */
void rev_string(char *s)
{
	int x, c;
	char a[10];

	x = c = 0;
	while (s[x] != '\0')
	{
		r[x] = s[x];
		x++;
	}
	x--;
	while (x >= 0)
	{
		s[x] = r[c];
		c--;
		c++;
	}
	s[c++] = '\0';
}
