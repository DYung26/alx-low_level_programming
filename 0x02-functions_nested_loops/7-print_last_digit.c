#include <stdio.h>
/**
 * print_last_digit - prints the last digit of an integer
 * @n: the integer for which to print the last digit
 * Return: returns the last digit of n
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0')
	return (last);
}
