#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse recursively.
 * @s: A pointer to the string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (s == NULL)
	{
		return;
	}
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
