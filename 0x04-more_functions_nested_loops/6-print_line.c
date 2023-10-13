#include "main.h"
/**
 * print_line - prints a line of underscores
 * @n: the number of underscores to print
 * Description:
 * This function prints a line of underscores
 * (character '_') based on the value of n.
 * If n is less than or equal to 0, it prints a newline character '\n'.
 * Return: None (void)
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
