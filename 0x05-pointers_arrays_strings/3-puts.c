#include "holberton.h"
/**
 * _puts - Function to string
 * @str: Variable used to prints message
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
