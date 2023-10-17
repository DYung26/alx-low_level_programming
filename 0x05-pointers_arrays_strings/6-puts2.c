#include "main.h"
/**
 * puts2 - Prints every other character in a null-terminated string.
 * @str: A pointer to the null-terminated string to be printed.
 * This function prints every other character in the
 * provided string 'str', starting with the first character,
 * followed by a newline character.
 * @str: The null-terminated string from which characters are to be printed.
 */
void puts2(char *str)
{
	int i = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	t = i - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
			_putchar(str[0]);
	}
	_putchar('\n');
}
