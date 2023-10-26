#include "main.h"

int ris_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	ris_prime_number(n, i - 1)
}

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (ris_prime_number(n, n - 1))
}
