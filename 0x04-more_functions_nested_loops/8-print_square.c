#include "main.h"
/**
 * print_square - prints a square made of '#' characters
 * @size: the size of the square (number of rows and columns)
 * Description:
 * This function prints a square made of '#' characters.
 *  The size of the square is determined by the value of 'size',
 * which represents both the number of rows and columns.
 * If 'size' is less than 1, the function prints a newline character
 * and does nothing.
 * Return: None (void)
 */
void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		putchar('\n');
		y++;
	}
}
