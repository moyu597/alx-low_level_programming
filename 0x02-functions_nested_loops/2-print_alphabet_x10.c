#include "main.h"

/**
 * print_alphabet_x10 - to print alphabet x10
 * Return:returns void
*/

void print_alphabet_x10(void)
{
	int i, j = 0;

	while (j <= 9)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
