#include "main.h"
/**
 * _strncat - concatenates 2 str's using n bytes from src
 * @src: param str to add
 * @dest: param str to be added to
 * Return: concatenated str
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_pt_count = 0;
	int src_pt_count;

	while (dest[dest_pt_count] != '\0')
	{
		dest_pt_count++;
	}
	
	for(src_pt_count = 0; src_pt_count < n && src[src_pt_count] != '\0'; src_pt_count++)
	{
		dest[dest_pt_count++] = src[src_pt_count];
		src_pt_count++;
	}
	dest[dest_pt_count++] = '\0';
	return (dest);
}
