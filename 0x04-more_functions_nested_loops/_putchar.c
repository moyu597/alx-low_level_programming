#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 *
 * @c: the character to be written
 *
 * Return: Onsuccess 1, on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
