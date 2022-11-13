#include "main.h"
#include <stdlib.h>

/**
 * check_mal - checks if newly alloc mem block is null
 * @mem: memory block
 *
 * Return: NULL
 */
char *check_mal(void *mem)
{
	if (mem == NULL)
	{
		return (NULL);
	}
	else
	{
		return (mem);
	}
}
/**
 * _realloc - reallocates a mem block using malloc and free
 * @ptr: old malloc
 * @old_size: size of ptr in bytes
 * @new_size: size of new malloc
 *
 * Return: ptr to new mem block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *inter_ptr;
	unsigned int count;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		check_mal(new_ptr);
		free(ptr);
		return (new_ptr);
	}
	new_ptr = malloc(new_size);
	check_mal(new_ptr);
	inter_ptr = ptr;
	if (new_size < old_size)
	{
		for (count = 0; count < new_size; count++)
		{
			new_ptr[count] = inter_ptr[count];
		}
	}

	else if (new_size > old_size)
	{
		for (count = 0; count < old_size; count++)
		{
			new_ptr[count] = inter_ptr[count];
		}
	}
	free(ptr);
	return (new_ptr);
}
