#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concats all args of program
 * @ac: num of elems in av
 * @av: str/ array
 *
 * Return: ptr to conc'd char
 */

char *argstostr(int ac, char **av)
{
	char *s_conc = NULL;
	int count = 0, j, tot_char = 0, i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < ac; j++)
	{
		for (count = 0; av[j][count]; count++)
		{
			tot_char++;
		}
	}

	s_conc = malloc(sizeof(char) * (tot_char + ac + 1));

	if (s_conc == NULL)
	{
		return (NULL);
	}

	count = 0;
	for (j = 0; j < ac; j++)
	{
		for (i = 0; av[j][i]; i++, count++)
		{
			s_conc[count] = av[j][i];
		}
		s_conc[count] = '\n';
		count++;
	}

	*(s_conc + count) = '\0';
	return (s_conc);
}
