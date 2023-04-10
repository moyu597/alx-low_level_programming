#include <stdio.h>

/**
 * main - Entry point. Prints the name of the program.
 * @argc: The number of command line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
