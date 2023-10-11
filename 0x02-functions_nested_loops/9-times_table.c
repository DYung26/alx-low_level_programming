#include <stdio.h>
/**
 * times_table - prints the times table
 */
void times_table(void)
{
	int x, y, z, u, d;
	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			
			if (z < 9)
			{
				u = z % 10;
				d = (z - u) / 10;
				putchar(44);
				putchar(32);
				putchar(d + '0');
				putchar(u + '0');
			}
			else
			{
				if (y != 0)
				{
					putchar(44);
					putchar(32);
					putchar(32);
				}
				putchar(z + '0');
			}
		}
		putchar('\n');
	}
}
