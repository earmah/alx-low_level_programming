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
	int count;
	int i;

	if (*str == '\0')
	{
		return (NULL);
	}
	else
	{
		/* Determine the size of the str*/
		while (*str != '\0')
		{
			count++;
			str++;
		}

		/* Return pointer back ot origin*/
		for (i = 0; i <= count; i++)
		{
			str--;
		}

		/* Copy str to duplicate string dup*/
		dup = malloc(count * sizeof(char));
		for (i = 0; i < count; i++)
		{
			dup[i] = *str;
			str++;
		}
	}

	return (dup);
	free(dup);
