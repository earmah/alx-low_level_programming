#include "main.h"
#include <stdlib.h>

/**
 * str_ln - size of str
 * @s: str to count
 *
 * Return: size of s
 */

int str_ln(char *s)
{
	unsigned int i = 0, count;

	if (s == NULL)
	{
		return (i);
	}

	for (count = 0; s[count] != '\0'; count++)
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concats two strings
 * @s1: first str
 * @s2: second str
 * @n: num of bytes taken from s2
 *
 * Return: pointer to newly alloc'd space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int i = 0, count, s1_ln, s2_ln;

	s1_ln = str_ln(s1);
	s2_ln = str_ln(s2);
	conc = malloc(sizeof(char) * (s1_ln + n + 1));
	if (conc == NULL)
	{
		return (NULL);
	}
	if (s1_ln + s2_ln == 0)
	{
		return ("");
	}
	else if (s2_ln == 0)
	{
		for (count = 0; count <= s1_ln; count++)
		{
			conc[count] = s1[count];
		}
		return (conc);
	}
	else if (s1_ln == 0)
	{
		for (count = 0; count < n; count++)
		{
			conc[count] = s2[count];
			return (conc);
		}
		for (; s2_ln < n; count++)
		{
			conc[count] = '\0';
		}
	}
	for (count = s1_ln, i = 0; count <= s1_ln + n; count++, i++)
	{
		conc[count] = s2[i];
	}
	conc[count++] = '\0';
	return (conc);
}
