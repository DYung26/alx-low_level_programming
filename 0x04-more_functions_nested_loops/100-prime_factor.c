#include <stdio.h>
/**
 * main - Entry point for the largest prime factor program
 * Description:
 * This program calculates and prints the largest prime factor of the number
 * 612852475143.
 * Return: 0 (Success)
 */
int main(void)
{
	long prime = 612852475143, divisor = 2;

	while (divisor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /=2;
			continue;
		}
		for (divisor = 3; divisor < (prime / 2); divisor += 2)
		{
			if ((prime % divisor) == 0)
				prime /= divisor;
		}
	}
	printf("%d\n", prime)
	return (0);
}
