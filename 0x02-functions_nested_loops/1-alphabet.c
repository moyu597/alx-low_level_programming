#include "main.h"

/**
 * print_alphabet - printing alphabet in lowercase
 *
 * Return: Always (void)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
