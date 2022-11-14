#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dog struct
 * @d: dog struct
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
