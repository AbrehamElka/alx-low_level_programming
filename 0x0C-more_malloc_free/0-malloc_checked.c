#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Write a function that allocates memory
 * @b: size of memory
 *
 * Return: a pointer on success and 98 if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
