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
	int length = 0;

	while (s[length] != '\0')
		length++;

	int start = 0;
	int end = length - 1;	

	while (start < end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
