#include <stdio.h>
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 * This function prints the lowercase alphabet characters
 * 'a' to 'z' ten times
 * to the standard output, each followed by a newline character.
 * It achieves this
 * by using a nested loop to print the alphabet repeatedly.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		const char *alphbtx10 = "abcdefghijklmnopqrstuvwxyz";
		int a = 0;

		while (alphbtx10[a] != '\0')
		{
			putchar(alphbtx10[a]);
			a++;
		}
		putchar('\n');
		i++;
	}
}
