#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two given integers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{

	int b;
	int c;
	int outcome;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* convert command line args to integers */
	b = atoi(argv[1]);
	c = atoi(argv[2]);

	outcome = b * c;

	printf("%d\n", outcome);

	return (0);
}
