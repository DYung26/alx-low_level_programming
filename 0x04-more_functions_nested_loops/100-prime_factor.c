#include <stdio.h>
#include <math.h>

/**
 * main - Entry point for the largest prime factor program
 * Description:
 * This program calculates and prints the largest prime factor
 * of the number 612852475143 using the math library to optimize.
 * Return: 0 (Success)
 */
int main(void)
{
	long long num = 612852475143;
	long long largestPrimeFactor = -1;

	while (num % 2 == 0) {
		largestPrimeFactor = 2;
		num /= 2;
	}

	long long limit = (long long)sqrt(num);
	for (long long factor = 3; factor <= limit; factor += 2) {
		while (num % factor == 0) {
			largestPrimeFactor = factor;
			num /= factor;
			limit = (long long)sqrt(num);
		}
	}

	if (num > 1) {
		largestPrimeFactor = num;
	}

	printf("%lld\n", largestPrimeFactor);

	return 0;
}
