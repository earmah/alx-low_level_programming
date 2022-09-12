#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * @void: empty
 *
 * Description - C file that determines if input is neg, pos or zero
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
