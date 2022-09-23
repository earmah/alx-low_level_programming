#include "main.h"
#include <stdio.h>
/**
 * main - entry point to test functions
 * Return: void
 */

int main(void)
{
	char s1[98] = "hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s , %s\n", s1, s2);
	ptr = _strcat(s1, s2);
	printf("%s", ptr);
	return (0);
}
