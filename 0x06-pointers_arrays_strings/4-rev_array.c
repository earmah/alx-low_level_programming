#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the elements of an arr
 * @a: int array param to be reversed
 * @n: num of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;

	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}	
}
