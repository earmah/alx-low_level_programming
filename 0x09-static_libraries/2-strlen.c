#include "main.h"
/**
 * _strlen - calculates len of str
 * @s: string
 * Return: len of str
 */

int _strlen(char *s)
{
	int sze = 0;

	while (*s != '\0')
	{
		sze++;
		s++;
	}
	return (sze);
}
