#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet in reverse order,
 *              each character followed by a newline.
 *
 * Return: Always returns 0 to indicate successful completion.
*/
int main(void)
{
	const char *alphbtrev = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;
	while (alphbtrev[i] != 0)
	{
		putchar(alphbtrev[i]);
		putchar('\n')
		i++;
	}
}
