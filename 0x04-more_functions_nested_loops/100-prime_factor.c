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
	long prime = 612852475143;
	long divisor = 2;

	while (divisor <= prime)
	{
		if (prime % divisor == 0)
		{
			prime /= divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
