#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function to free memory allocated for struct dog
 * @d: the struct dog to free
 * Return: free dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
