#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;

	if (n < 0)
		digit = -1 * digit;
	_putchar('0' + digit);
	return (digit);
}
