#include "holberton.h"
/**
 * _strcmp - Compare two char
 * @s1: Variable
 * @s2: Variable2
 * Return: 15 or -15 or 0
 **/
int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;

	while (s1[x] && s2[x] && s1[x] == s2[x])
		x++;
	return (s1[x] - s2[x]);
}
