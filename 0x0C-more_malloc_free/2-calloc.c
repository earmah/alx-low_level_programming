#include <stdlib.h>
#include "main.h"

/**
 * calloc - allocates memory for an array using malloc
 * @nmemb: num of elems in array
 * @size: bit size of elem in array
 *
 * Return: pointer to new array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *clc;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	clc = malloc(size * nmemb);

	if (clc == NULL)
	{
		return (NULL);
	}

	return (clc);
}
