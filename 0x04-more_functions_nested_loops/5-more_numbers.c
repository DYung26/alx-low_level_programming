#include "main.h"
/**
 * more_numbers - prints a specific pattern of numbers
 * Description:
 * This function prints a pattern of two-digit numbers,
 * starting from 00 to 99,
 * in a 10x15 grid. It utilizes the _putchar function to print the numbers.
 * Return: None (void)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
