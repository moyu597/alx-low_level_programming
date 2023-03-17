#include <stdio.h>

/**
 * main- entry point
 *
 * Return: success (0)
 */

int main(void)
{
	int  i, j;
	
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i / 1 + '0');
			putchar(i % 1 + '0');
			putchar(',');
			putchar(' ');
			putchar(j / 1 + '0');
			putchar(j % 1 + '0');
			if (i != 8 || j != 9)
			{
				putchar(' ');
			}
		}
	}
	return (0);
}

