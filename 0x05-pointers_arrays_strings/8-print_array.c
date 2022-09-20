#include "main.h"
/**
 * print_array - print all elem of arr
 * @a: array
 * @n: num of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	printf("%d", a[0]);
	for (i = 1; i < n; ++i)
	{
		printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
