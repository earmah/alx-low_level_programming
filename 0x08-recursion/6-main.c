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

	r = is_prime_number(1);
	printf("%d\n", r);
	r = is_prime_number(7919);
	printf("%d\n", r);
	r = is_prime_number(-1);
	printf("%d\n", r);

	return (0);
}
