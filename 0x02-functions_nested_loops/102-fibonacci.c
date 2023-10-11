#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: Generates and prints the first 50 Fibonacci numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", j);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}
		++i;
	}
	printf("\n");
	return (0);
}
