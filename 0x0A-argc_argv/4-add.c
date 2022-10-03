#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point; adds numbers
 * @argc: num of elems
 * @argv: elems
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;
	int sum = 0;
	
	if (argc <= 1)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (count = 1; count < argc - 1; count++)
		{
			if (isdigit(argv[count]))
			{
				sum += argv[count];
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
}
