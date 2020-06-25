#include "holberton.h"
/**
 * _strcmp - Compare two char
 * @s1: Variable
 * @s2: Variable2
 * Return: 15 or -15 or 0
 **/
int _strcmp(char *s1, char *s2)
{
	if (s1 < s2)
	{
		return (-15);
	}
	else if (s1 > s2)
	{
		return (15);
	}
	return (0);
}
