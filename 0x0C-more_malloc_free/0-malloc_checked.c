#include "main.h"

void *malloc_checked(unsigned int b)
{
	int *t = malloc(b);

	if (t == NULL)
		exit(98);
	return (t);
}
