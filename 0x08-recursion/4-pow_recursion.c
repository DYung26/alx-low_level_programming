#include "main.h"
/**
 * _pow_recursion - A function that calculates the power of a number.
 * @x: The base number.
 * @y: The exponent.
 *
 * This function calculates the power of a number 'x'
 * raised to the exponent 'y' using recursion.
 * If 'y' is negative, it returns -1 to indicate an error,
 * as this function does not handle negative exponents.
 * If 'y' is 0, it returns 1, as any number raised to the power of 0 is 1.
 * For any other positive 'y',
 * it calculates the power recursively by
 * multiplying 'x' by itself 'y' times.
 *
 * Return: The result of 'x' raised to the power of 'y' or -1 in case of an error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
