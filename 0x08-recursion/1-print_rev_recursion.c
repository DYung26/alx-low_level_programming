#include "main.h"

void _print_rev_recursion(char *s)
{
	if (s == NULL)
	{
		return;
	}
	if (*s == '\0')
	{
		_putchar(*s - 1);
		_print_rev_recursion(s - 1);
	}
}
