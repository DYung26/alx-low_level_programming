#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two
 * two-digit numbers with no repeating digits, separated by a comma
 * and space.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 100; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');
			putchar(' ');
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');

			if (num1 == 98 && num2 == 99)
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

