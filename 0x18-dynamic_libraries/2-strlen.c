#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 * @s: A pointer to a null-terminated character string.
 * Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
