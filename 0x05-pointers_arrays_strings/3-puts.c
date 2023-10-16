#include "main.h"
void _puts(char *str)
{
	while (*str != '\0')
	{
		str++;
	}
	printf("%s\n", str)
}
