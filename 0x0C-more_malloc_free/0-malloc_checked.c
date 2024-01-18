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
	if (b % sizeof(double) == 0)
	{
		double *i;

		i = malloc(b);
		if (i == NULL)
		{
			return ((int *) 98);
		}
		return (i);
	}
	if (b % sizeof(float) == 0)
	{
		float *i;

		i = malloc(b);
		if (i == NULL)
			return ((int *) 98);
		return (i);
	}
	if (b % sizeof(int) == 0)
	{
		int *i;

		i = malloc(b);
		if (i == NULL)
			return ((int *) 98);
		return (i);
	}
	char *i;

	i = malloc(b);
	if (i == NULL)
		return ((int *) 98);
	return (i);
}
