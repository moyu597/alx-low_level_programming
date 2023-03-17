#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: success (0)
 */

int main(void)
{
	int mynumber = 0;

	while (mynumber < 10)
	{
		putchar(mynumber);
		mynumber++;
	}
	putchar('\n');
	return (0);
}
