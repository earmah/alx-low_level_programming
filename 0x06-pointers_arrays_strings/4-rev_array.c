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
	int rev_arr[n];
	int count;
	int rev_count = n - 1;

	for (count = 0; count < n; count++)
	{
		rev_arr[count] = a[rev_count];
		rev_count--;
	}
	
	for (count = 0; count < n; count++)
	{
		a[count] = rev_arr[count];
	}
	
}
