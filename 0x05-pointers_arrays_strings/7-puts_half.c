#include "holberton.h"
/**
 * puts_half - Function to print half
 * @str: variable used to array
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i - 1) / 2;
	while (j < i)
	{
		_putchar(str[j]);
			j++;
	}
	_putchar('\n');
}
