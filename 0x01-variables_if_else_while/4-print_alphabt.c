#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: This program prints the lowercase alphabet characters
 *              from 'a' to 'z' followed by a newline character using a while loop.
 * Return: Always returns 0 to indicate successful completion.
*/
int main(void)
{
	const char *str = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
