#include "main.h"

/**
 * _strspn - gets the length of a prefix substr
 * @s: initial str
 * @accept: substr prefix to look for
 * Return: number of bytes in s containing accept
 */

unsigned int _strspn(char *s, char *accept)
{
	/*Vars to count num of char in args, and num of matches */
	unsigned int count_cmp, len = 0, acc_val = 0, count_str = 0;
	int is_found = 0;

	for (count_cmp = 0; accept[count_cmp] != '\0'; count_cmp++)
	{
		/*num of char in accept arg */
		acc_val += 1;
	}

	while (s[count_str] != '\0')
	{
		/*Iterate through accept and cmp each char with curr s*/
		for (count_cmp = 0; count_cmp < acc_val; count_cmp++)
		{
			if (s[count_str] == accept[count_cmp])
			{
				len += 1;
				is_found = 1;
			}
		}

		count_cmp = 0;

		if (is_found == 0)
		{
			return (len);
		}
		else
		{
			is_found = 0;
			count_str++;
		}
	}
	return (len);
}
