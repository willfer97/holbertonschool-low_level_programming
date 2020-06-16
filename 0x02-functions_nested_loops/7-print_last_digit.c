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
		digit = -digit;
	_putchar(digit + '0');
	return (digit);
}
