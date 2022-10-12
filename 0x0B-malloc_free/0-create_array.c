#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates arr of chars and
 * initializes it with a specific char
 * @size: size of mem to print
 * @c: char to convert to arr
 *
 * Return: pointer to the arr or NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int count;

	str = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (count = 0; count < size; count++)
		{
			str[count] = c;
		}
	}
	return (str);
	free (str);
}


