#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 * Return: 0 on success
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		int lastdigit = n % 10;

		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	if ((n % 10) ==  0)
	{
		int lastdigit = n % 10;

		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	}
	if ((n % 10) < 6 && n != 0)
	{
		int lastdgt = n % 10;

		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdgt);
	}
	return (0);
}
