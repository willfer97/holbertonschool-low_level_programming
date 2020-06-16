#include "holberton.h"
/**
 * _isalpha - check the words if is alpha.
 * @c: character to test
 * Return: 0 if is true or 1 else isnt true.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
