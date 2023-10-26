#include "main.h"
/**
 * palindrome - A helper function that checks if a string is a palindrome.
 * @s: The input string to check for palindrome.
 * @i: The current index from the start of the string.
 * @len: The current index from the end of the string.
 *
 * This function is a recursive helper for is_palindrome.
 * It checks if a given string 's' is a palindrome
 * by comparing characters from the start and end of the string.
 * It iteratively increments 'i' from the start
 * and decrements 'len' from the end while checking
 * if the characters at these positions match.
 * If a mismatch is found, it returns 0,
 * indicating that the string is not a palindrome.
 * If the entire string is checked and no mismatches are found,
 * it returns 1, indicating that the string is a palindrome.
 *
 * Return: 1 if the string is a palindrome, 0 if it is not.
 */
int palindrome(char *s, int i, int len)
{
	if (i >= len)
		return (1);
	if (*(s + i) != *(s + (--len)))
		return (0);
	return (palindrome(s, i + 1, len));
}
/**
 * is_palindrome - A function that checks if a string is a palindrome.
 * @s: The input string to check for palindrome.
 *
 * This function checks if the input string 's' is a palindrome
 * using recursion. A string is considered a palindrome
 * if it reads the same forwards and backwards.
 * If the string is empty (a null terminator), it's considered a palindrome.
 * It calls the helper function palindrome to determine
 * if 's' is a palindrome.
 *
 * Return: 1 if the string is a palindrome,
 * 0 if it is not or if the string is empty.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome(s, 0, _strlen_recursion(s)));
}
