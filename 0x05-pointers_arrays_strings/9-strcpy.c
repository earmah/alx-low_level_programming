#include "main.h"

/**
 * *_strcpy - copy str to dest
 * @dest: destination
 * @src: source
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*(src + count) != '\0')
	{
		*(dest + count) = *(src + count);
		count++;
	}
	*(dest + count) = '\0';
	return (dest);
}
