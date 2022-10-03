#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point; multiply two numbers
 * @argc: num of elem
 * @argv: elems
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[argc - 1]) * atoi(argv[argc - 2]));
		return (0);
	}
}
