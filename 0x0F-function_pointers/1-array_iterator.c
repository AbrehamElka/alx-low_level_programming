#include "function__pointer.h"
/**
 * array_iterator - excutes function for every elem
 * @size: size of array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size == NULL || action == NULL)
		return;
	int i = 0;
	for (;i<=size;i++)
		action(i);
}
