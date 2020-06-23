#include "holberton.h"
/**
 * _strlen - Function used to return value of lenght
 * @s: variable declared char for return strlen
 * Return: Value of strlen
 */
int _strlen(char *s)
{
	int c;

	c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);

}
