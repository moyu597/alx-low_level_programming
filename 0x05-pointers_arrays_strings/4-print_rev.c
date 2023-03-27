#include "main.h"

/**
 * print_rev - this function prints reverse of the string
 * @s: string to be reversed
 * Return: returns void
 */

void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
