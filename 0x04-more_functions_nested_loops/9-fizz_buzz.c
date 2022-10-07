#include "main.h"
#include <stdio.h>
/**
 * main - entry point; print numbers 1 to 100; mults of 3(fizz)
 * mults of 5(buzz)
 *
 * Return: 0
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && !(count % 5 == 0))
		{
			printf(" Fizz");
		}
		else if (count % 5 == 0 && !(count % 3 == 0))
		{
			printf(" Buzz");
		}
		else if (count % 3 == 0 && count % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (count == 1)
		{
			printf("%d", count);
		}
		else
		{
			printf(" %d", count);
		}
	}
	printf("\n");

	return (0);
}
