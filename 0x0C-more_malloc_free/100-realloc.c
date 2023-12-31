#include "main.h"
#include <stdlib.h>

/**
 * my_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the memory block
 *
 * Return: a pointer to the newly allocated memory
 */
void *my_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    if (new_size == 0)
    {
	    free(ptr);
	    return (NULL);
    }
    if (ptr == NULL)
	    return malloc(new_size);
    if (new_size == old_size)
	    return ptr;

    void *new_ptr = malloc(new_size);

    if (new_ptr == NULL)
	    return NULL;
    if (new_size > old_size)
	    memcpy(new_ptr, ptr, old_size);
    else
	    memcpy(new_ptr, ptr, new_size);
    free(ptr);
    return new_ptr;
}
