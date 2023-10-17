#include "main.h"
/**
 * rev_string - Reverses the characters in a null-terminated string.
 * @s: A pointer to the null-terminated string to be reversed in-place.
 * This function takes a null-terminated string 's'
 * and reverses the order of its characters in-place,
 * meaning it modifies the original string.
 * @s: The null-terminated string to be reversed.
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	{
		counter++;
		for (i = 0; i < counter; i++)
		{
			counter--;
			rev = s[i];
			s[i] = s[counter];
			s[counter] = rev;
		}
	}
}
