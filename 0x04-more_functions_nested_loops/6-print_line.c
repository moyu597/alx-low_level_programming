#include "main.h"

/**
 * print_line- printing line
 *
 * @n: number of times to be printed
 *
 * Return: void
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
