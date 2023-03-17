task 9:Write a program that prints all possible combinations of single-digit numbers.

Numbers must be separated by ,, followed by a space
Numbers should be printed in ascending order
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar four times maximum in your code
You are not allowed to use any variable of type char
 This program uses a for loop to iterate through the numbers 0 to 9, and uses the putchar function to print each number as a character. To print the comma and space separators, it checks if the current number is not equal to 9, and if so, prints the comma and space characters.

Note that instead of using a character variable to represent the digits, this program uses integer arithmetic to convert the digits to their ASCII character codes. Specifically, it adds the ASCII code for the character '0' (which is 48) to the digit, which results in the ASCII code for the corresponding character. For example, when num is 0, num + '0' evaluates to 48, which is the ASCII code for the character '0'.
