#include <stdio.h>
/**
 * main - Entry poin
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nums, nums2;

	for (nums = '0'; nums <= '9'; nums++)
	{
		for (nums2 = '0'; nums2 <= '9'; nums2++)
		{
			putchar(nums);
			putchar(nums2);
			if (nums != '9' || nums2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
