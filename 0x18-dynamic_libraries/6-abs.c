#include <stdio.h>
/**
 * _abs - calculates the absolute value of an integer
 * @c: the integer for which to calculate the absolute value
 * Return: the absolute value of c
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
