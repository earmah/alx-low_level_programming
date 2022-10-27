#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0
 */

int main(void)
{
	int r;

	r = is_palindrome("level");
	printf("%d\n", r);
	r = is_palindrome("");
	printf("%d\n", r);
	r = is_palindrome("test");
	printf("%d\n", r);

	return (0);
}
