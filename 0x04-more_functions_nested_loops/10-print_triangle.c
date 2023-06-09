#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: takes in a integer for size of triangle
 */

void print_triangle(int size)
{
	int rowsize, columnsize, k;

	if (size <= 0)
		_putchar('\n');
	for (rowsize = 0; rowsize < size; rowsize++)
	{
		for (columnsize = size - rowsize; columnsize > 1; columnsize--)
		{
			_putchar(' ');
		}
		for (k = rowsize + columnsize; k >= 1; k--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
