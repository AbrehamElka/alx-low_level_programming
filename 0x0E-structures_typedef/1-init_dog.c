#include <stdlib.h>
#include "dog.h"
/**
* init_dog - initializes a varable for dog
* @d: the dog.
* @name: the name of the dog.
* @age: age of the dog.
* @owner: owner of the dog.
*
* Return: Nothing.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
