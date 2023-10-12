#include <stdio.h>
/**
 * main - Entry point for the program
 * Description: Generates and prints the first 98 Fibonacci numbers.
 * The numbers are separated by commas and followed by a new line.
 * Return: Always 0 to indicate success
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2;

	printf("%lu, %lu", fib1, fib2);

	for (count = 2; count < 98; count++)
	{
		unsigned long next = fib1 + fib2;
		printf(", %lu", next);
		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");
	return 0;
}

