#include "main.h"
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int len = 0;

		while (argv[len] != NULL)
			len++;
		printf("%d\n", len);
	}
	return (0);
}
