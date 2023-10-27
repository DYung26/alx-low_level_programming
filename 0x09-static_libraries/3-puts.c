#include "main.h"
/**
 * _puts - Prints a string followed by a newline to standard output.
 * @str: A pointer to the null-terminated string to be printed.
 * This function prints each character in the provided string 'str' until
 * the null terminator '\0' is encountered.
 * It then appends a newline character to the output.
 * @str: The null-terminated string to be printed.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
