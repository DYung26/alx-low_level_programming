#include <stdio.h>
void print_alphabet_x10(void)
{
	int i = 0;
	
	while (i < 5)
	{
		const char *alphbtx10 = "abcdefghijklmnopqrstuvwxyz";
		int a = 0;
		
		while (alphbtx10[a] != '\0')
		{
			putchar(alphbtx10[a]);
			a++;
		}
		putchar('\n');
		i++;
	}
}
