#include "main.h"

/**
 * cap_string - a fcn that capitalizes all words of a str
 * @s: str to be altered
 * Return: altered str
 */

char *cap_string(char *s)
{
	int count = 0;

	/*Determine end of str */
	
	
	while (s[count] != '\0')
	{
		/*Check if first char needs capitalization*/
		if (count == 0 && s[count] > 96 && s[count] < 123)
		{
			s[count] -= 32;
			count++;
		}
		/* If current char is small letter and prev char is separator then edit, */
		if ((s[count - 1] == 46 || s[count - 1] == 32 ||
				s[count - 1] == 10 || s[count - 1] == 9 ||
				s[count - 1] == 44 || s[count - 1] == 59 ||
				s[count - 1] == 33 || s[count - 1] == 63 ||
				s[count - 1] == 34 || s[count - 1] == 40 ||
				s[count - 1] == 41 || s[count - 1] == 123 ||
				s[count - 1] == 125)
					&& s[count] > 96 && s[count] < 123)
		{
			/*printf("entered for loop\n");*/
			/*printf("Curr S: %s\n", s);*/
			s[count] -= 32;
			count++;
		}
		else
		{
			count++;
		}
	}
	return (s);
}
