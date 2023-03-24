my READ ME file
task 4: Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.

Prototype: void more_numbers(void);
You can only use _putchar three times in your code
 code: #include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14.
*/

void more_numbers(void)
{
	int i = 0;
	char c;

	while(i <= 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
explanation:This is a C function named "more_numbers" which prints the numbers from 0 to 14 ten times. It uses nested loops to achieve this.

The outer loop runs 10 times, and the inner loop runs from 0 to 14. Inside the inner loop, the function checks if the current number is greater than 9. If it is, the function prints the first digit of the number, then the second digit.

The "_putchar" function is called to print each character. This function writes a character to the standard output (stdout) stream.

At the end of each iteration of the outer loop, the function prints a newline character to start a new line.

task 7: Write a function that draws a diagonal line on the terminal.

Prototype: void print_diagonal(int n);
You can only use _putchar function to print
Where n is the number of times the character \ should be printed
The diagonal should end with a \n
If n is 0 or less, the function should only print a \n

code: #include "main.h"

/**
* print_diagonal - draws a diagonal line
* @n: takes in an integer
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}

explanation: function first checks if the value of "n" is less than or equal to zero. If it is, the function simply prints a newline character and returns without doing anything else.

If "n" is greater than zero, the function enters a loop that iterates "n" times, with the loop variable "i" starting at 0 and ending at "n-1". Within this loop, there is another loop that iterates "i+1" times, with the loop variable "j" starting at 0 and ending at "i".

For each value of "i" and "j", the function checks if "i" is equal to "j". If it is, the function prints a backslash character and a newline character using the "_putchar" function, which is assumed to be defined elsewhere in the program. If "i" is not equal to "j", the function prints a space character.

By the end of the outer loop, the function will have printed a diagonal line of length "n".
