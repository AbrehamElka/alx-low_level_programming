#ifndef DOG_FILE
#define DOG_FILE
/**
* dog_t - an alias for struct dog.
*/
typedef struct dog dog_t;
/**
* struct dog - stores info about a dog.
* @name: the name of the dog.
* @age: age of the dog.
* @owner: the owner of the dog.
*
* Description: struct called "dog", that stores
* name, age and owner of a dog.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
