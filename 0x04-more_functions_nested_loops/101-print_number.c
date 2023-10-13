#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to be printed
 * Description:
 * This function prints an integer 'n' to the standard output.
 * It handles both positive and negative integers.
 * If 'n' is negative, it prints a minus sign '-'.
 * Return: None (void)
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
