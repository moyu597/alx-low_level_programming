#include <stdio.h>
#include "main.h"

/**
 * _isupper - this checks if a character is
 * uppercase
 * @c: character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
