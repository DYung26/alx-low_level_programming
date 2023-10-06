#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the characters representing hexadecimal
 *              digits from '0' to 'e', followed by a newline character.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
	const char *hexadecimal = "0123456789abcde";

	int i = 0;

	while (hexadecimal[i] != '\0')
	{
		putchar(hexadecimal[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
