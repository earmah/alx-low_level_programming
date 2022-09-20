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

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);
		if (i != n-1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
