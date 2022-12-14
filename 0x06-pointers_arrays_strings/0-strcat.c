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

	/*move pointer to location of null byte */
	while (dest[dest_pt_count] != '\0')
	{
		dest_pt_count++;
	}
	/* Replace null byte with first elem of src */
	while (src[src_pt_count] != '\0')
	{
		dest[dest_pt_count++] = src[src_pt_count];
		src_pt_count++;
	}
	dest[dest_pt_count++] = '\0';
	return (dest);
}

