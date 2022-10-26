#include <math.h>
#include "main.h"

/**
 * _sqrt_recursion - calculate natural sqrt of a number
 * @n: number to square
 *
 * Return: calculated sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0 || n == NULL)
	{
		return (-1);
	}

	return (sqrt(n));

}
