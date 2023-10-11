#include <stdio.h>
/**
 * main - Entry point
 * Description: Calculates the sum of even Fibonacci numbers
 *  below 4,000,000.
 * Prints the result to the standard output.
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*int i = 0;*/
	long j = 1;
	long k = 2;
	long sum = 2;

	while (k + j < 4000000)
	{
		long next = k + j;
		if (next % 2 == 0)
		{
			sum += next;
			/*j = k - j;
			++i;*/
		}
		j = k;
		k = next;
	}
	printf("%ld\n", sum);
	return (0);
}
