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
