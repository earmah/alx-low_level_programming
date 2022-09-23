#include "main.h"
/**
 * _strncat - concatenates 2 str's using n bytes from src
 * @src: param str to add
 * @dest: param str to be added to
 * @n:num of bytes to append
 * Return: concatenated str
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_pt_count = 0;
	int src_ct;

	while (dest[dest_pt_count] != '\0')
	{
		dest_pt_count++;
	}

	for (src_ct = 0; src_ct < n && src[src_ct] != '\0'; src_ct++)
	{
		dest[dest_pt_count++] = src[src_ct];
		src_ct++;
	}
	dest[dest_pt_count++] = '\0';
	return (dest);
}
