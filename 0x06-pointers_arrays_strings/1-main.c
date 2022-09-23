#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char s1[98] = "hello ";
	char s2[] = "world!\n";
	char *ptr;

	ptr = _strncat(s1, s2, 1);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s\n", ptr);

	return (0);
}
