#include "main.h"

void *malloc_checked(unsigned int b)
{
	int *t;
	t = malloc(b);

	if (b == NULL)
		return (98);
	return (0);
}
