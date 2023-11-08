#include "function_pointers.h"
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int a = 0;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		while (a == 0)
		{
			a = cmp(array[i]);
			i++;
		}
		return (i - 1);
	}
	return (-1);
}
