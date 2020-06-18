#include "holberton.h"

/**
 *_isupper - Function if is upper in othercase not
 * @c: variable character
 * Return: If c is uppercase return 1 othercase return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
