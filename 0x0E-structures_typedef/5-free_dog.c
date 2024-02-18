#include "dog.h"
#include <stdlib.h>

/**
* free_dog - free's the allocated memory.
* @d: the allocated memory.
*
* Return: Nothing.
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
