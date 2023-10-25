#include "main.h"

void _puts_recursion(char *s)
{
	if (s == NULL)
	{
		_putchar('\n')
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
