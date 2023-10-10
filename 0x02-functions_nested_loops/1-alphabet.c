#include <stdio.h>
/**
 * print_alphabet - Entry point of the program
 * This is the starting point of the program. It calls the print_alphabet
 * function to print the lowercase alphabet characters
 * to the standard output.
*/
void print_alphabet(void)
{
	const char *alphbtlwrcs = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphbtlwrcs[i] != '\0')
	{
		putchar(alphbtlwrcs[i]);
		i++;
	}
	putchar('\n');
}
