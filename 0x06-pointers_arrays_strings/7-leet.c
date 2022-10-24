#include "main.h"
/**
 * leet - a function that replaces letters of a str
 * with certain numbers; 1337
 * @s: str to be altered
 * Return: altered str
 */

char *leet(char *s)
{
	int count = 0;
	int count_alpha;
	int up[] = {65, 69, 76, 79, 84};
	int lo[] = {97, 101, 108, 111, 116};
	int num[] = {52, 51, 49, 48, 55};

	while (s[count] != '\0')
	{
		count_alpha = 0;
		for (count_alpha = 0; count_alpha < 5; count_alpha++)
		{
			if (s[count] == up[count_alpha] ||
				s[count] == lo[count_alpha])
			{
				s[count] = num[count_alpha];
			}
		}
		count++;
	}

	return (s);
}
