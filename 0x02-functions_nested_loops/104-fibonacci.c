#include <stdio.h>
/**
 * main - Entry point for the program
 * Description: Generates and prints the first 98 Fibonacci numbers.
 * The numbers are separated by commas and followed by a new line.
 * Return: Always 0 to indicate success
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, next = 0;

	while (i < 98)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 97)
			printf(", ");
		i++;
	}

	printf("\n");
	return (0);
}

