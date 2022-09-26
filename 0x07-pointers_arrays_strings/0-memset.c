#include "main.h"
/**
 * _memset - fills the first n bytes of memory area
 * pointed to by s with the constant byte b
 * @s: str param to be filled
 * @b: str param filling
 * @n: num of bytes to fill
 * Return: pointer to mem of area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}
