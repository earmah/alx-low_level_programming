#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - returns the sum of all its params
 * @n: num of params
 *
 * Return: sum total
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int count;

	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		sum += va_arg(args, unsigned int);
	}

	va_end(args);
	return (sum);

}
