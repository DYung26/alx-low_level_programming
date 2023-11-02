#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The amount of memory to allocate
 *
 * This function allocates a block of memory of size 'b' bytes using the
 * malloc function. If the allocation fails (i.e., if malloc returns NULL),
 * the function exits with an error code of 98.
 *
 * Return: Upon success, a pointer to the allocated memory block. If the
 * allocation fails, the function does not return; it exits the program.
 */
void *malloc_checked(unsigned int b)
{
	int *t = malloc(b);

	if (t == NULL)
		exit(98);
	return (t);
}
