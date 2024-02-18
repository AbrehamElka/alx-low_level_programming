#include "function_pointers.h"
/**
* array_iterator - it excutes a function to elem of array.
* @array: the array that the func to be excuted.
* @size: size of the array.
* @action: the function.
*
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int size_arr = (int) size, i = 0;

	if (array && action)
	{
		for (; i < size_arr; i++)
		{
			action(array[i]);
		}
	}
}
