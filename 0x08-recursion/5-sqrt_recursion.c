#include "main.h"
/**
 * rsqrt_recursion - A helper function that calculates
 * the square root of a number.
 * @n: The input integer for which the square root is calculated.
 * @i: The current value being tested as a potential square root.
 *
 * This function is a recursive helper for _sqrt_recursion.
 * It attempts to find the square root
 * of 'n' by iteratively increasing the value of 'i' until 'i * i'
 * becomes greater than 'n' or 'i * i' equals 'n'.
 * If 'i * i' becomes greater than 'n', it returns -1
 * to indicate that there is no exact integer square root for 'n'.
 * If 'i * i' equals 'n', it returns 'n' as the square root.
 *
 * Return: The square root of 'n' or -1 if there is no
 * exact integer square root.
 */
int rsqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (n);
	return (rsqrt_recursion(n, i + 1));
}
/**
 * _sqrt_recursion - A function that calculates the integer
 * square root of a number.
 * @n: The input integer for which the square root is calculated.
 *
 * This function calculates the integer square root of a
 * non-negative integer 'n' using recursion.
 * If 'n' is negative, it returns -1 to indicate an error,
 * as it only handles non-negative integers.
 * It calls the helper function rsqrt_recursion to find the square root.
 *
 * Return: The integer square root of 'n' or -1 in case of
 * an error or if there's no exact integer square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (rsqrt_recursion(n, 0));
}
