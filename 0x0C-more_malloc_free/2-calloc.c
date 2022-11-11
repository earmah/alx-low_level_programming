#include <stdlib.h>
#include "main.h"

/**
 * _memset - initialize array to 
 * @arr: array
 * @c: constant byte to fill arr
 * @size: size of array/ num of elems
 */

unsigned int *_memset(unsigned int *arr, unsigned int c, unsigned int size)
{
	unsigned int count;

	for (count = 0; count < size; count++)
	{
		arr[count] = c;
	}
	return (arr);
}

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
	unsigned int init = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	clc = malloc(size * nmemb);

	if (clc == NULL)
	{
		return (NULL);
	}

	_memset(clc, init, nmemb);
	return (clc);
}
