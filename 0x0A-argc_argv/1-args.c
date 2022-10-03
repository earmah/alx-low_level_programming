#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point; prints number of args
 * @argc: num of args
 * @argv: args passed
 * Return: 0
 */

int main(int argc,__attribute((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
