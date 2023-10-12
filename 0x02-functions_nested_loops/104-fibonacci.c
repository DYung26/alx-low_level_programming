#include <stdio.h>
#include <string.h>
/**
 * addStrings - Function to add two strings representing numbers
 * Return:
 * - result: an array to store the result of the addition
 * - num1: the first number as a string
 * - num2: the second number as a string
 * Description: str: Get the length of the string.
 */
void reverseString(char str[]);

void addStrings(char result[], char num1[], char num2[])
{
	int carry = 0;
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int x = (i >= 0) ? num1[i] - '0' : 0;
		int y = (j >= 0) ? num2[j] - '0' : 0;
		int sum = x + y + carry;

		result[k++] = sum % 10 + '0';
		carry = sum / 10;

		if (i >= 0)
			i--;
		if (j >= 0)
			j--;
	}

	result[k] = '\0';
	reverseString(result);
}

/**
 * reverseString - Function to reverse a string.
 * Parameter:
 * str: the string to be reversed.
 */
void reverseString(char str[]) /*str: Get the length of the string.*/
{
	int length = strlen(str);
	int i, j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

/**
 * main - Store Fibonacci numbers as strings.
 * Initialize the first Fibonacci number.
 * Initialize the second Fibonacci number.
 * Return: Return 0 to indicate successful program execution.
 */
int main(void)
{
	int i;
	char fib[100][100];

	strcpy(fib[0], "1");
	strcpy(fib[1], "2");

	for (i = 2; i < 98; i++)
	{
		addStrings(fib[i], fib[i - 1], fib[i - 2]);
	}

	for (i = 0; i < 97; i++)
	{
		printf("%s, ", fib[i]);
	}
	printf("%s\n", fib[97]);
	return (0);
}
