#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers in base 10,
 * each followed by a newline character, starting from 0 and going up to 9.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
	int num = 0;
	
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
