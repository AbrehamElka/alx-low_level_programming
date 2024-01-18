#include "main.h"
#include <stdlib.h>
/**
* _realloc - allocates memory for new size.
* @ptr: privious pointer.
* @old_size: size of old pointer.
* @new_size: size of new pointer.
*
* Return: a newly allocated pointer on success.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *castnew;
	void *newptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		return (newptr);
	}

	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	castnew = (char *) newptr;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		castnew[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (newptr);
}
