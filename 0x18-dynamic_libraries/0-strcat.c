#include "main.h"
/**
 * _strcat - Concatenates the string 'src' to the end of the string 'dest'.
 * @dest: A pointer to the destination string where 'src' will be appended.
 * @src: A pointer to the source string to be appended to 'dest'.
 * This function appends the null-terminated string 'src' to the end of the
 * null-terminated string 'dest'. The resulting string in 'dest' will also
 * be null-terminated.
 * Return: A pointer to the modified 'dest' string.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
