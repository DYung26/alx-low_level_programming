#include "main.h"
/**
 * print_rev - Prints the reverse of a null-terminated string
 * followed by a newline.
 * @s: A pointer to the null-terminated string to be reversed and printed.
 * This function calculates the length of the provided string 's'
 * and then prints its characters in reverse order,
 * followed by a newline character.
 * @s: The null-terminated string to be reversed and printed.
 */
void print_rev(char *s)
{
	int i = 0;
	int o;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (o = i; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
		_putchar('\n');
}
