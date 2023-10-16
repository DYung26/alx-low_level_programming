#include "main.h"
/**
 * swap_int - Swaps the values of two integer variables
 * pointed to by pointers.
 * @a: Pointer to the first integer variable.
 * @b: Pointer to the second integer variable.
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
