#include "main.h"
/**
 * _strcat - appends src to dest by concatenation
 * @src: initial str
 * @dest: addendum
 * Return: concatenated str
 */

char *_strcat(char *dest, char *src)
{
	int dest_pt_count = 0;
	int src_pt_count = 0;

	while (*dest != '\0')
	{
		dest++;
		dest_pt_count++;
	}
	dest_pt_count++;
	while (*src != '\0')
	{
		dest[dest_pt_count] = src[src_pt_count];
		dest_pt_count++;
		src_pt_count++;
		dest++;
		src++;
	}
	dest[dest_pt_count + 1] = '\0';
	return (dest);
}

