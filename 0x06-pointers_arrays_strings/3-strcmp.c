#include "main.h"

/**
 * _strcmp - compares two str
 * @s1: param first str
 * @s2: param second str
 * Return: 1 0 -1
 */

int _strcmp(char *s1, char *s2)
{
	int val_s1;
	int val_s2;
	int count;

	for (count = 0; s1[count] != '\0'; count++)
	{
		val_s1 += _putchar(s1[count]);
	}

	for (count = 0; s2[count] != '\0'; count++)
	{
		val_s2 += _putchar(s2[count]);
	}

	return (val_s1 - val_s2);
}

