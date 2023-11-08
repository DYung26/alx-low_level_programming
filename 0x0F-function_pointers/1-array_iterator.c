#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to an integer array
 * @size: The size of the array
 * @action: A function pointer to a function that takes an integer
 * as its parameter and returns void.
 * This function is applied to each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL)
	{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
	}
}
