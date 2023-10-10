#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: This program prints the characters of the string "_putchar"
 *              followed by a newline character.
 * Return: Always 0 (success)
 */
int main(void)
{
	const char *str = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
