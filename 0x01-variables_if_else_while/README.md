task 9:Write a program that prints all possible combinations of single-digit numbers.

Numbers must be separated by ,, followed by a space
Numbers should be printed in ascending order
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar four times maximum in your code
You are not allowed to use any variable of type char
 This program uses a for loop to iterate through the numbers 0 to 9, and uses the putchar function to print each number as a character. To print the comma and space separators, it checks if the current number is not equal to 9, and if so, prints the comma and space characters.

Note that instead of using a character variable to represent the digits, this program uses integer arithmetic to convert the digits to their ASCII character codes. Specifically, it adds the ASCII code for the character '0' (which is 48) to the digit, which results in the ASCII code for the corresponding character. For example, when num is 0, num + '0' evaluates to 48, which is the ASCII code for the character '0'.
task 10: Write a program that prints all possible different combinations of two digits.

Numbers must be separated by ,, followed by a space
The two digits must be different
01 and 10 are considered the same combination of the two digits 0 and 1
Print only the smallest combination of two digits
Numbers should be printed in ascending order, with two digits
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar five times maximum in your code
You are not allowed to use any variable of type char
All your code should be in the main function
The two variables "tens" and "ones" are integers that are used to store the values of the tens and ones digits of the two digit number.

The program uses two nested loops to generate all possible combinations of two digit numbers. The outer loop iterates over the tens digits from 0 to 9. The inner loop iterates over the ones digits from the tens digit plus one to 9.

The "putchar" function is used to output the two digit number to the console. The tens and ones digits are converted to characters using the ASCII code, and then printed out.

The program also adds a comma and a space after each two digit number, except for the last one in each row. This is done using an if statement to check if the tens digit is less than 8.

Finally, the program outputs a newline character to start a new line, and then returns a value of 0 to indicate that the program has executed successfully.: int main(void)
{
  int tens;
  int ones;

  for (tens = 0; tens <= 9; tens++)
    {
      for (ones = tens + 1; ones <= 9; ones++)
	{
	  putchar(tens + '0');
	  putchar(ones + '0');

	  if (tens < 8)
	    {
	      putchar(',');
	      putchar(' ');
	    }
	}
    }
  putchar('\n');

  return (0);
