#include "main.h"
#include <stdlib.h>
#include <ctype.h>
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
	if (i == NULL || !((isdigit(b))) || b <= 0)
		return ((int *) 98);
	return (i);
}
