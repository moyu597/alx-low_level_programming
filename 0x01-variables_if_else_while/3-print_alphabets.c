#include <stdio.h>

/**
 * main-Entry point
 *
 * Return: success (0)
 */

int main(void)
{
	char letter = 'a';
	char Letter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (Letter <= 'z')
	{
		putchar(Letter);
		Letter++;
	}
	putchar('\n');
	return (0);
}
