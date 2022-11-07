#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_count - count len of s
 * @s: str to count
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
	int i, count1 = 0, j = 0, count2 = 0, tot_count;
	char *s_conc;

	count1 = str_count(s1); /*count str len*/
	count2 = 1;
	count2 = str_count(s2);
	tot_count = count1 + count2;

	s_conc = malloc(sizeof(char) * (count1 + count2));
	if (tot_count == 0)
	{
		*s_conc = '\0';
		return (s_conc);
	}
	else if (tot_count == count1)
	{
		for (i = 0; i < count1; i++)
		{
			s_conc[i] = s1[i];
		}
		return (s_conc);
	}
	else if (tot_count == count2)
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
	for (i = count1; i <= (count1 + count2); i++)
	{
		s_conc[i] = s2[j];
		j++;
	}
	return (s_conc);
}

