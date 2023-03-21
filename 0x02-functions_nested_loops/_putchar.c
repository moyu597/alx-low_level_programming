#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 *
 * @c: the character we want to write as the standard output
 *
 * Return: On success 1, while on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
