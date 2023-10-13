#include <stdio.h>

/**
 * main - Entry point for the largest prime factor program
 * Description:
 * This program calculates and prints the largest prime factor
 * of the number 612852475143.
 * Return: 0 (Success)
 */
int main(void)
{
	long long num = 612852475143;
	long long factor = 2;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
		}
		else
		{
			factor++;
		}
	}

	printf("%lld\n", factor);
	return 0;
}

