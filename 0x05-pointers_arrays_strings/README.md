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


task 4: Write a function that reverses a string.

Prototype: void rev_string(char *s);
code: void rev_string(char *s)
{
	int len = 0;
	int l = 0;
	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	l = len - 1;
	for ( ; e < ((l / 2) + 1) ; e++)
	{
		x = (l - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}

explanation: "rev_string," which takes a character pointer as input. The purpose of this function is to reverse the order of the characters in the string that is passed to it.

The function first calculates the length of the string using a while loop that counts the number of characters until it reaches the end of the string, which is indicated by a null character ('\0').

Then, using a for loop, the function swaps the first character with the last, the second with the second last, and so on until it reaches the middle of the string. This is done by using a temporary variable to hold one character while another is moved to its position.

After the for loop, the function returns and the reversed string is stored in the original memory location of the input string.
