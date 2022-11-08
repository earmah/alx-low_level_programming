#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly alloc space in mem
 * which contains a copy of the str givn as a param
 * @str: string param
 * Return: pointer to new mem space
 */

char *_strdup(char *str)
{
	char *dup;
	int count = 1;
	int i;

	if (*str == '\0' || str == NULL)
	{
		return (NULL);
	}
	else
	{
		/* Determine the size of the str*/
		for (i = 0; str[i] != '\0'; i++)
		{
			count++;
		}

		/* Copy str to duplicate string dup*/
		dup = malloc(sizeof(char) * (count));

		/*Check if memory allocation was successful*/
		if (dup == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < count; i++)
		{
			dup[i] = str[i];
		}
	}
	return (dup);
}
