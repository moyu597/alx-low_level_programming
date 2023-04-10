#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int cents, i, coin_num;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coin_num = 0;
	for (i = 0; i < 5; i++)
	{
		coin_num += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", coin_num);

	return (0);
}
