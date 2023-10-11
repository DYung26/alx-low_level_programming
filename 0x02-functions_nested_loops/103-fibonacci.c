#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: Calculates the sum of even Fibonacci numbers
 *  below 4,000,000.
 * Prints the result to the standard output.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
		{
			sum += k;
			j = k - j;
			++i;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
