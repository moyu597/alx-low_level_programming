#include <stdio.h>

/**
 * main - print combinations of two digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int hundreds;
	int tens;
	int ones;

	for (hundreds = 0; hundreds <= 9; hundreds++)
	{
		for (tens = hundreds + 1; tens <= 9; tens++)
		{
			for (ones = tens + 1; ones <= 10; ones++)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
