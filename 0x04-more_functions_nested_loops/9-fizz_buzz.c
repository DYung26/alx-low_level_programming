#include "main.h"
/**
 * main - Entry point for the FizzBuzz program
 * Description:
 * This function prints numbers from 1 to 100.
 * If a number is divisible by 3,
 * it prints "Fizz." If a number is divisible by 5, it prints "Buzz."
 * If a number is divisible by both 3 and 5, it prints "FizzBuzz."
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else if ((num % 3) == 0)
			printf("Fizz");
		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
