#include "holberton.h"

/**
 * swap_int - Function used fro change value between a & b
 * @a: first variable with value of 98
 * @b: second variable with value of 42
 */
void swap_int(int *a, int *b)
{
	int change = *a;
	*a = *b;
	*b = change;
}
