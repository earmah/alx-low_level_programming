#include "main.h"
#include <stdlib.h>

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

	if (!s1 && !s2)
	{
		return (NULL);
	}

	/* Count num of chars in s1 & s2*/
	for (i = 0; s1[i] != '\0'; i++)
	{
		count1++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		count2++;
	}
	count2++;

	/*Allocate needed mem for s_conc*/
	s_conc = malloc(sizeof(char) * (count1 + count2));
	if (s_conc == NULL)
	{
		return (NULL);
	}
	/*Copy each char to s_conc*/
	for (i = 0; i < count1; i++)
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
