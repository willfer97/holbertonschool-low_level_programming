#include "holberton.h"

/**
 * _isdigit - Function id is digit or not
 * @c: varible used to function
 * Return: if c is true return 1 and othercase return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
