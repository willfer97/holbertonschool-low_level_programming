#include "holberton.h"
/**
 * _abs - is used to calculate absolute value of the numer
 * @r: integer to converted
 * Return: absolute value of the imput number
 */

int _abs(int r)
{
	if (r < 0)
		r = r * -1;
	return (r);
}
