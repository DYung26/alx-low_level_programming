#include "main.h"
/**
 * _puts_recursion - Prints a string recursively followed by a newline.
 * @s: The input string to print.
 *
 * Description: This function recursively prints each character of the input
 * string, followed by a newline character when it reaches the end of the
 * string.
 */
void _puts_recursion(char *s)
{
	if (s == NULL)
	{
		return;
	}
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
