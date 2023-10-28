#include "main.h"
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int len;

		len = sizeof(argv) / sizeof(argv[0])
		printf("%d\n", len);
	}
	printf("%d\n", argc);
	return (0);
}
