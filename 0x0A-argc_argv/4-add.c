#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * isInt - check if all elem are digits
 * @c: param to check
 * Return: 0 or 1
 */

int isInt(char *c)
{
	while (*c != '\0')
	{
		if (isdigit(*c) == 0)
		{
			return (0);
		}
		else
		{
			c++;
		}
	}
	return (1);
}

/**
 * main - entry point
 * @argc: num of elems
 * @argv: elems to add
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			/*Check if all ints are odd or even */
			if (isInt(argv[count]) == 1)
			{
				sum += atoi(argv[count]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	return (0);
}
