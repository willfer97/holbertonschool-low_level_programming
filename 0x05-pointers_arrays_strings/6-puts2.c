#include "holberton.h"

/**
 * puts2 - Function used to print 0..9 without n+1
 * @str: Variable string
 */
void puts2(char *str)
{
	for (; *str != '\0'; str++)
	{
		if (*str != '1' && *str != '3' && *str != '5' && *str != '7' && *str != '9')
			_putchar(*str);
	}
	_putchar('\n');
}
