#include "main.h"
/**
 * ris_prime_number - A helper function that checks if a number is prime.
 * @n: The input integer to check for primality.
 * @i: The current divisor being tested.
 *
 * This function is a recursive helper for is_prime_number.
 * It checks if 'n' is a prime number by
 * iteratively testing whether 'n' is divisible by values of 'i'
 * starting from 'n - 1' down to 2.
 * If it finds any divisor other than 1,
 * it returns 0 to indicate that 'n' is not a prime number.
 * If no divisors are found, it returns 1, indicating that 'n' is prime.
 *
 * Return: 1 if 'n' is prime, 0 if 'n' is not prime.
 */
int ris_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	ris_prime_number(n, i - 1);
}
/**
 * is_prime_number - A function that checks if a number is prime.
 * @n: The input integer to check for primality.
 *
 * This function checks if 'n' is a prime number using recursion.
 * If 'n' is less than or equal to 1, it returns 0,
 * as prime numbers must be greater than 1.
 * Otherwise, it calls the helper function ris_prime_number
 * to determine if 'n' is prime.
 *
 * Return: 1 if 'n' is prime, 0 if 'n' is not prime
 * or if 'n' is less than or equal to 1.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (ris_prime_number(n, n - 1));
}
