#include <stdio.h>
int main(void)
{
	int d1;

	for(d1 = 0; d1 < 10; d1++)
	{
		if (d1 == 9)
			putchar(d1 + '0');
		else
		{
			putchar(d1 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
