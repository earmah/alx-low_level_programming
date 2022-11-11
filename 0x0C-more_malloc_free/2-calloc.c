#include <stdlib.h>
#include "main.h"

/**
 * _memset - initialize array to c
 * @arr: array
 * @c: constant byte to fill arr
 * @size: size of array/ num of elems
 *
 * Return: array init to c
 */

char *_memset(char *arr, char c, unsigned int size)
{
	unsigned int count;

	for (count = 0; count < size; count++)
	{
		arr[count] = c;
	}
	return (arr);
}

/**
 * _calloc - allocates memory for an array using malloc
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

	clc = _memset(clc, 0, nmemb);
	return (clc);
}
