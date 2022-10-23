#include "main.h"
/**
 * cap_string - a fcn that capitalizes all words of a str
 * @s: str to be altered
 * Return: altered str
 */

char *cap_string(char *s)
{
	while (*s != '\0')
	{
		while (*s != ' ' || *s != '.')
		{
			if (*s > 96 && *s < 123)
			{
				*s -= 32;
			}
			s++;
		}
		s++;
	}
	return (s);
}
