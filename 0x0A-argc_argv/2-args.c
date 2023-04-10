#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	char **arg = argv;

	(void)argc;

	while (*arg != NULL)
	{
		printf("%s\n", *arg);
		arg++;
	}

	return (0);
}
