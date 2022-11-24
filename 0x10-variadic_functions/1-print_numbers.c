#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the str to be printed b/n numbers
 * @n: num of ints passed into function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list args;

	va_start(args, n);

	if (n > 0)
	{
		for (count = 0; count < n - 1; count++)
		{
			printf("%d", va_arg(args, const unsigned int));
			if (separator)
			{
				printf("%s", separator);
			}

		}
		printf("%d\n", va_arg(args, const unsigned int));
	}
	else
	{
		printf("\n");
	}

	va_end(args);
}
