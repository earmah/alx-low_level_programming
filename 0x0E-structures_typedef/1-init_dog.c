#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a var of type struct dog
 * @d: struct of dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
