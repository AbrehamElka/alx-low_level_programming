#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory with size b.
* @b: size of the memory.
*
* Return: the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL || b == INT_MAX)
		return ((int *) 98);
	return (i);
}
