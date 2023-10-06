#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of single-digit
 *              numbers in ascending order, separated by commas and spaces.
 *              Each combination is followed by a newline character, except
 *              for the last one.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
	int d1;

	for (d1 = 0; d1 < 10; d1++)
	{
		putchar(d1 + '0');
		if (d1 == 9)
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
