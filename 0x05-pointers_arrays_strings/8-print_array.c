#include "main.h"
#include <stdio.h>
/**
 * print_array - print all elem of arr
 * @a: array
 * @n: num of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	printf("%d", a[0]);
	if (n > 1)
	{
		for (i = 1; i < n; ++i)
		{
			printf(", ");
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
