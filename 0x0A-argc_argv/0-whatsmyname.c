#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - entry point; print file name
 * @argc: num of elem in argv array
 * @argv: array with char elem
 *
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s \n", argv[0]);
	return (0);
}
