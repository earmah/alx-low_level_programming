#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new dog using typedef
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: pointer to dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
	{
		return (NULL);
	}

	n_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	strcpy(n_dog->name, name);

	n_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}

	strcpy(n_dog->owner, owner);

	n_dog->age = age;
	return (n_dog);
}
