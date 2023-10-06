#include <stdio.h>
int main(void)
{
	const char *str = "abcdfghijklmnoprstuvwxyz";
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	return (0);
}
