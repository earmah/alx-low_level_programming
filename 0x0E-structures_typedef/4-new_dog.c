#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * check_mal - check if mal is NULL
 * @ptr: ptr to malloc
 *
 * Return: char * to ptr or NULL
 */

char *check_mal(char *ptr)
{
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (ptr);
	}
}

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
	check_mal(n_dog->name);
	strcpy(n_dog->name, name);

	n_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	check_mal(n_dog->owner);
	strcpy(n_dog->owner, owner);

	n_dog->age = age;

	if (n_dog == NULL || n_dog->name == NULL || n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		free(n_dog->owner);
	}
	return (n_dog);
}
