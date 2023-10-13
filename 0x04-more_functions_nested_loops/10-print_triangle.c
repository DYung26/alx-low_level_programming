#include "main.h"
/**
 * print_triangle - prints a triangle made of '#' characters
 * @size: the height (number of rows) of the triangle
 * Description:
 * This function prints a triangle made of '#' characters,
 * with the specified height determined by the value of 'size'.
 * If 'size' is less than or equal to 0, the function
 * simply prints a newline character.
 * Return: None (void)
 */
void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
				_putchar(' ');
			for (index = 0; index < hash; index++)
				_putchar('#');
			if (hash == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
