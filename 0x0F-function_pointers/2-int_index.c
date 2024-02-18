#include "function_pointers.h"
/**
* int_index - it returns the index for the
* function is 1.
* @array: the array to itterate.
* @size: size of the array.
* @cmp: a pointer to a function.
*
* Return: the index.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int size_arr = (int) size, i = 0;

	if (size_arr <= 0)
		return (-1);
	if (array && cmp)
	{
		for (; i < size_arr; i++)
		{
			if (cmp(array[i] == 1)
				return (i);
		}
	}

	return (-1);
}
