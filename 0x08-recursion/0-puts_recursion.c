#include "main.h"

void _puts_recursion(char *s)
{
	int i = 0;

	if (i < 0)
	{
		return;
	}
	_putchar(s[i]);
	_puts_recursion(char *s[i + 1]);
}
