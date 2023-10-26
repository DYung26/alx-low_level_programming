#include "main.h"

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (rsqrt_recursion(n, 0));
}

int rsqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (n);
	return (rsqrt_recursion(n, i + 1))
}
