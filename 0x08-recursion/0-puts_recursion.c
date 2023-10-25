#include "main.h"

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
