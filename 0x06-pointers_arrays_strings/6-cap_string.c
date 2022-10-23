#include "main.h"
#include <stdio.h>
/**
 * cap_string - a fcn that capitalizes all words of a str
 * @s: str to be altered
 * Return: altered str
 */

char *cap_string(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (s[count] == 32 || s[count] == 46)
		{
			count++;
		}
		else
		{
			/*printf("Passed 2nd while loop\n");*/
			if (s[count - 1] == 32 && s[count] > 96 && s[count] < 123)
			{
				/*printf("entered for loop\n");*/
				/*printf("Curr S: %s\n", s);*/
				s[count] -= 32;
			}
			count++;
		}
	}
	printf("%s", s);
	return (s);
}
