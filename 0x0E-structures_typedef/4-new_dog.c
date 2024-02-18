#include "dog.h"
#include <stdlib.h>

/**
* strlen_ - gives the len of a string.
* @name: the string.
*
* Return: length of string.
*/
int strlen_(char *name)
{
	int i = 0;

	for (; name[i] != '\0';)
		i++;
	return (i);
}
/**
* strcpy_ - copy's a string to another one.
* @newname: the place to be copied to.
* @name: the one to be copied.
*
* Return: Nothing.
*/
void strcpy_(char *newname, char *name)
{
	int i = 0, l = strlen_(name);

	for (; i < l; i++)
		newname[i] = name[i];
	newname[l] = '\0';
}
/**
* new_dog - creates a new dog instance.
* @name: the name of the dog.
* @age: the age of the dog.
* @owner: the owner of the dog.
*
* Return: a pointer to the newly created
* dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog = (dog_t *) malloc(sizeof(dog_t));

	if (mydog == NULL)
		return (NULL);
	mydog->name = (char *) malloc(strlen_(name) + 1);
	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}
	strcpy_(mydog->name, name);
	mydog->age = age;

	mydog->owner = (char *) malloc(strlen_(owner) + 1);
	if (mydog->owner == NULL)
	{
		free(mydog);
		return (NULL);
	}
	strcpy_(mydog->owner, owner);
	return (mydog);
}
