#include "main.h"

/**
 * more_numbers- print numbers 0 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;
	char c;

	while (i <= 10)
	{
	for (c = 0; c <= 14; c++)
	{
		if (c > 9)
		_putchar((c / 10) + '0');
		_putchar((c % 10) + '0');
	}
	_putchar('\n');
	i++;
	}
}
