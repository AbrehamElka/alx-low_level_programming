#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: an array
 * @size: size of array
 * @cmp: function pointers
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array == NULL || cmp == NULL || size <= 0)
		return -1;
	
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
			return (i);
	}
	return (-1);
}
