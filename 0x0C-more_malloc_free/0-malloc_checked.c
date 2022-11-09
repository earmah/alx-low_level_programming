#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocated memory of size b using malloc
 * @b: size of mem to allocate
 *
 * Return: pointer to allocated mem
 */

void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(b);

	if (mal == NULL)
	{
		exit(98);
	}
	return (mal);
}
