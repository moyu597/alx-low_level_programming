#include "main.h"

/**
 * _pow_recursion - power
 * @x: base number
 * @y: exponent
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
		int temp = _pow_recursion(x, y / 2);

		return (temp * temp);
	}
	else
	{
		int temp = _pow_recursion(x, (y - 1) / 2);

		return (x * temp * temp);
	}
}
