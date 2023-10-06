#include <stdio.h>
int main(void)
{
	int d1, d2;

	for(d1 = 0; d1 < 10; d1++)
	{
		for(d2 = d1 + 1; d2 < 10; d2++)
		{
			putchar(d1 + '0');
			putchar(d2 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
