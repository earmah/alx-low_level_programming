#include "main.h"

/**
 * print_diagsums - prints the sum of two diags of sq matrix
 * @a: matrix of integers
 * @size: size of row
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	
	/*Parse each elem and add to left and right sum*/
	int left_count = 1, right_count = 1;
	int left_sum = 0, right_sum = 0;
	int count;

	/* First elem always needed for left diag sum  */
	left_sum += a[0];

	for (count = 1; count < (size * size); count++)
	{
		if (right_count % (size - 1) == 0 && (size * size) - count >= size )
		{
			right_sum += a[count]; 
			right_count = 0;
		}
		if (left_count % (size + 1) == 0)
		{
			left_sum += a[count];
			left_count = 0;
		}
		right_count++;
		left_count++;
	}


	_putchar(leftsum);
	_putchar(", ");
	_putchar(rightsum);
}

