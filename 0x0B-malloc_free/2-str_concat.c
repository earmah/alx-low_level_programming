#include "main.h"
#include <stdlib.h>

/**
 * str_count - count len of s
 * @s: first str to count
 *
 * Return: size of s
 */

int str_count(char *s)
{
	int count, i = 0;

	if (!s)
	{
		return (0);
	}
	else
	{
		for (count = 0; s[count] != '\0'; count++)
		{
			i++;
		}
		return (i);
	}

}

/**
 * str_concat - concats two strings
 * @s1: first str
 * @s2: second str
 * Return: char ptr to new str
 */
char *str_concat(char *s1, char *s2)
{
	int i, count1 = 0, j = 0, count2 = 0;
	char *s_conc;

	count1 = str_count(s1);
	count2 = str_count(s2); /*count str len*/

	s_conc = malloc(sizeof(char) * (1 + count1 + count2));
	if (s_conc == NULL)
	{
		return ('\0');
	}
	if (count2 == 0)
	{
		for (i = 0; i < count1; i++)
		{
			s_conc[i] = s1[i];
		}
		return (s_conc);
	}
	else if (count1 == 0)
	{
		for (i = 0; i < count2; i++)
		{
			s_conc[i] = s2[i];
		}
		return (s_conc);
	}
	for (i = 0; i <= count1; i++)
	{
		s_conc[i] = s1[i];
	}
	for (i = count1, j = 0; i <= (count1 + count2); i++, j++)
	{
		s_conc[i] = s2[j];
	}
	s_conc[i] = '\0';
	return (s_conc);
}

