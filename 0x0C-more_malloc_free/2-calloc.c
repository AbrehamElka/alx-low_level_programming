#include "main.h"
#include <stdlib.h>
#include <stdint.h>
/**
* _calloc - allocates memory.
* @nmemb: the length of array.
* @size: the size of data type.
* Return: an allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	unsigned char *castptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	castptr = (unsigned char *) ptr;
	i = 0;
	while (i < nmemb * size)
	{
		castptr[i] = 0;
		i++;
	}
	return (ptr);
}
