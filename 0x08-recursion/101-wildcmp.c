#include "main.h"
/**
 * wildcmp - A function that compares two strings with wildcards.
 * @s1: The first input string.
 * @s2: The second input string with wildcards.
 *
 * This function compares two strings, 's1' and 's2',
 * where 's2' may contain wildcard characters '*'.
 * It checks if 's1' matches 's2' based on the pattern defined by 's2',
 * where '*' can match any sequence of characters.
 *
 * Return: 1 if 's1' matches 's2' based on the wildcard pattern,
 * 0 if they do not match.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wldcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	if (*s2 == '*')
		return (wldcmp(s1 + 1, s2) || wldcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wldcmp(s1 + 1, s2 + 1));
	return (0);
}
