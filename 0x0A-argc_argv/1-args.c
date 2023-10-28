#include "main.h"
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", sizeof(argv)/sizeof(argv[0]));
	}
	printf("%d\n", argc);
	return (0);
}
