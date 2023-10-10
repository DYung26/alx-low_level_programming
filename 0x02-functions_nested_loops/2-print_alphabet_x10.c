#include <stdio.h>
void print_alphabet_x10(void)
{
	for (int i = 0; i < 5; i++)
	{
		const char *alphbtx10 = "abcdefghijklmnopqrstuvwxyz";
		int a = 0;
		
		while (alphbtx10[a] != '\0')
		{
			putchar(alphbtx10[a]);
			a++;
		}
		putchar('\n');
	}
}
