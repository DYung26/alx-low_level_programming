#include "main.h"
/**
 * print_diagonal - prints a diagonal pattern of backslashes and spaces
 * @n: the number of diagonal lines to print
 * Description:
 * This function prints a diagonal pattern of backslashes and spaces,
 *  with each line having one more backslash than the previous line.
 * The number of diagonal lines to print is determined by the value of n.
 * Return: None (void)
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == 1)
					_putchar('\\')
				else if(j < i)
					_putchar(' ')
			}
			_putchar('\n');
		}
	}
}
