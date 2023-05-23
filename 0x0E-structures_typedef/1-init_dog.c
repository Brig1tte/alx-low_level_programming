#include "dog.h" 
#include <stdlib.h>

/**
 * init_dog - function to initialize a variable of the type struct dog
 * @d: pointer to initialized struct dog
 * @name: dog's name to be initialized
 * @age: dog's age to be initialized
 * @owner: dog's owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
