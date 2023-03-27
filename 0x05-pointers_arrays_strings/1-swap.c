#include "main.h"

/**
 * swap_int - function to swap two values
 * @a: first integer
 * @b: second integer
 *
 * Return: returns void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
