#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - a function that reallocates a memory.
 * @ptr: the old memory
 * @old_size: old size
 * @new_size: new size
 *
 * Return: a pointer on success or NULL on fail
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
        	free(ptr);
        	return (NULL);
   	}

    	if (ptr == NULL)
        	return (malloc(new_size));
    	if (new_size == old_size)
        	return (ptr);

    	void *new_ptr = malloc(new_size);

    	if (new_ptr == NULL)
        	return (NULL);

    	if (new_size > old_size)
        	memcpy(new_ptr, ptr, old_size);
    	else
        	memcpy(new_ptr, ptr, new_size);

    	free(ptr);

    	return (new_ptr);
}
