#include <stdio.h>

/**
 * main- entry point
 *
 * Return: 0 on (success
 */

int main(void)
{
	int tens, ones;

	for (tens = 0; tens <= 99; tens++)
	{
		for (ones = tens; ones <= 99; ones++)
		{
			if (tens != ones)
			{
				putchar(tens / 10 + '0');
				putchar(tens % 10 + '0');
				putchar(' ');
				putchar(ones / 10 + '0');
				putchar(ones % 10 + '0');

				if (tens != 98 || ones != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
i}
