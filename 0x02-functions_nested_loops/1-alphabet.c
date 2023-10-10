#include <stdio.h>
#include "main.h"
void print_alphabet(void)
{
	const char *alphbtlwrcs = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphbtlwrcs[i] != '\0')
	{
		putchar(alphbtlwrcs[i]);
		i++;
	}
	putchar('\n');
}
