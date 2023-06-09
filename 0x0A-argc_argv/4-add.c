#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success , 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int num;
	int i;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
