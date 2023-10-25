#include "main.h"
/**
 * factorial - A function that calculates the factorial of a number.
 * @n: The input integer for which factorial is calculated.
 *
 * This function calculates the factorial of a
 * non-negative integer 'n' using recursion.
 * If 'n' is negative, it returns -1 to indicate an error.
 * If 'n' is 0 or 1, it returns 1, as the factorial of 0 and 1 is 1.
 * For any other positive 'n', it calculates the factorial recursively.
 *
 * Return: The factorial of 'n' or -1 in case of an error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1 )
		return (1);
	return (n * factorial(n - 1));
}
