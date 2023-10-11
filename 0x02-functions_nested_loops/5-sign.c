#include <stdio.h>
#include "_putchar.c"
/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 * Return: 1 if n is positive, -1 if n is negative, 0 if n is zero
 */
int print_sign(int a)
{
	if (a > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (a > 0)
	{
		_putchar(45);
		return(-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
