#include "holberton.h"
/**
 * _islower - check the words if is lower.
 * @c: character to test
 * Return: 0 if is true or 1 else isnt true.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
