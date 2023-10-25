#include "main.h"

void _puts_recursion(char *s)
{
	if (s > 'z')
	{
		return;
	}
	_putchar(s);
	_puts_recursion(s + 1);
	}
}
