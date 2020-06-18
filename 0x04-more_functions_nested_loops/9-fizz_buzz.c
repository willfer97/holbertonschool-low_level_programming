#include "holberton.h"
#include <stdio.h>
/**
 * main - Print numbers 1-100
 * Multiples of 3, 5 and the same
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", n);
	}
	printf("\n");

	return (0);
}
