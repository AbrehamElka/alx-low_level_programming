#include "main.h"
#include <stdlib.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *castptr, *castnew;
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
	}
	castptr = (char *) ptr;

	newptr = malloc(new_size);
	castnew = (char *) newptr;
	if (newptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for(i = 0; i < new_size; i++)
	{
		castnew[i] = castptr[i];
	}
	free(ptr);
	return (newptr);
}
