#include <stdio.h>
#include <math.h>
/**
 * main - Entry point for the largest prime factor program
 * Description:
 * This program calculates and prints the largest prime factor
 * of the number 612852475143 using the math library to optimize.
 * Return: 0 (Success)
 */
long main(void)
{
	long num = 612852475143;
	long largestPrimeFactor = -1;

	while (num % 2 == 0) {
		largestPrimeFactor = 2;
		num /= 2;
	}

	long limit = (long)sqrt((double)num);
	long factor = 3;
	while (factor <= limit)
	{
		while (num % factor == 0)
		{
			largestPrimeFactor = factor;
			num /= factor;
			limit = (long)sqrt((double)num);
		}
		factor += 2;
	}

	if (num > 1)
	{
		largestPrimeFactor = num;
	}

	printf("%lld\n", largestPrimeFactor);
	return (0);
}
