#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints from min to max
 * @min: min value
 * @max: max value
 *
 * Return: arr of ints
 */

int *array_range(int min, int max)
{
	int *arr;
	int count = min;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (; count <= max; count++)
	{
		arr[count] = count;
	}
	return (arr);
}
