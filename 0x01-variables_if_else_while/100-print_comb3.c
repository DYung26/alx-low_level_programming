#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two single-digit
 *              numbers in ascending order, separated by commas and spaces. Each
 *              combination is followed by a newline character, except for the
 *              last one.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 < 10; d1++)
	{
		for (d2 = d1 + 1; d2 < 10; d2++)
		{
			putchar(d1 + '0');
			putchar(d2 + '0');
			if (d1 == 8)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
