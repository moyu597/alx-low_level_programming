#include "main.h"

/**
 * factorial - compute the factorial of an integer
 * @n: integer
 * Return: factoriall of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
