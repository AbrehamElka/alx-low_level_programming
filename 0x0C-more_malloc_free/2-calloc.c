#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory.
* @nmemb: the length of array.
* @size: the size of data type.
* Return: an allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
