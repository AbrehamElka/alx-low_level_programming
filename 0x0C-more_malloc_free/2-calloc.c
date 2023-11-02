#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc -  a function that allocates memory for an array
 * @nmemb: number of elements
 * @size: the size in byte
 *
 * Return: an address or a NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, size * nmemb);

	return (ptr);
}
