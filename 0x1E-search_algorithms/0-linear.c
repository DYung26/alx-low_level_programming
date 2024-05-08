#include "search_algos.h"
/* Linear search algorithm */

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located or
 * -1 if NULL or value isn't found in the list
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	for (int i = 0, i < size, i++)
	{
		printf("Value checked array[%d] = [%d]", i, array[i]);
		if (array[i] == value)
			printf("Found %d at index: %d", value, i)
			return (i);
	}
	return (-1);
}
