#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @i: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int i)
{
	if (i < 0)
		i = i * -1;
	_putchar((i % 10) + '0');
	return (i % 10);
}
