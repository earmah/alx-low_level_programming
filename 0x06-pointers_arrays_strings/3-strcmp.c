#include "main.h"

/**
 * _strcmp - compares two str
 * @s1: param first str
 * @s2: param second str
 * Return: 1 0 -1
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
		{
			diff = s1[i] - s2[i];
		}
		i++;
	}
	return (diff);
}
