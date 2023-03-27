my read me file
task 3: Write a function that prints a string, followed by a new line, to stdout.

Prototype: void _puts(char *str);
code: #include "main.h"

/**
 * _puts - function that prints a string
 * @str: string parameter
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
	_putchar(str[len]);
	len++;
	}
	_putchar('\n');
}
explaination:  takes in a string (a group of characters) as an input and prints it to the screen. It does this by looping through each character of the string and printing them one by one until it reaches the end of the string. Finally, it adds a new line character to the end of the printed string.

The first line "#include "main.h"" is just including a header file named "main.h" which is a file that contains declarations and definitions of functions used in the program.
