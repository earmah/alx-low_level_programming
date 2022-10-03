#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point; print all args
 * @argc: num of elem
 * @argv: elem received
 * Return: 0
 */

int main(int argc, int *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
