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
	for (int i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			for ( ; i < n; i++)
			{
				dest[i] = '\0';
			}
		}
		dest[i] = src[i];
	}
	return (dest);
}
