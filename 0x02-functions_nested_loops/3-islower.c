#include "main.h"
/**
 * _islower - checking if an argument is lowercase or uppercase
 *
 * @c: parameter to check if it is lower or higher case
 * Return: return 1 when lowercase and 0 when otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
