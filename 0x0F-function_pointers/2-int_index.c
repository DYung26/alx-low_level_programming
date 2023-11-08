#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array
 * using a comparison function
 * @array: Pointer to an integer array
 * @size: The size of the array
 * @cmp: A function pointer to a function that takes an integer
 * as its parameter and returns an integer (usually 0 or 1)
 * as a result of a comparison.
 * This function is used to compare elements in the array.
 * Return: The index of the first integer in the array for
 * which the comparison function does not return 0.
 * If no such integer is found or if size is less
 * than or equal to 0, the function returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		int a = cmp(array[i]);
		if (a != 0)
			return (i);
		i++;
	}
	return (-1);
}
