#include "main.h"
/**
 * rev_string - prints whole string in rev
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	char revs = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		count--;
		revs = s[i];
		s[i] = s[count];
		s[count] = revs;
	}
}
