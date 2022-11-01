#include "main.h"
/**
 * _strncpy - copies a string
 * @src: param str to be copied
 * @dest: param str to copy to
 * @n: number of bytes to copy
 * Return: copied str
 */

char *_strncpy(char *dest, char *src, int n)
{
	int ind;

	for (ind = 0; ind < n && src[ind] != '\0'; ind++)
	{
		dest[ind] = src[ind];
	}
	for ( ; ind < n; ind++)
	{
		dest[ind] = '\0';
	}

	return (dest);
}
