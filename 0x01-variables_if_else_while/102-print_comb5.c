#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of three
 * single-digit numbers in ascending order, separated by commas and spaces.
 * Each combination is followed by a newline character, except for the last
 * one.
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
	int d1, d2, d3, d4;

	for (d1 = 0; d1 < 100; d1++)
	{
		for (d2 = d1; d2 < 100; d2++)
		{
			for (d3 = 0; d3 < 100; d3++)
			{
				for (d4 = d3 + 1; d4 < 100; d4++)
				{
					putchar(d1 + '0');
					putchar(d2 + '0');
					putchar(' ');
					putchar(d3 + '0');
					putchar(d4 + '0');
					if (d1 == 9 && d2 == 8 && d3 == 9 && d4 == 9)
					putchar('\n');
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
