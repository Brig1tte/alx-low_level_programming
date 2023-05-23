#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function to return the length of a string
 * @s: string to check
 * Return: length of the string
 */
int _strlen(char *s)
{
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}


/**
 * *_strcpy -  a function to copy a string pointed to
 * @src: the string
 * @dest: pointer to the buffer that contains the string
 * Return: pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, k;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	for (k = 0; k < length; k++)
	{
		dest[k] = src[k];
	}
	dest [k] = '\0';
	return (dest);
}


/**
 * new_dog - function to create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog, NULL if otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
