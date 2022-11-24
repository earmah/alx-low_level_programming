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
	int sep_count = 0, sep;


	/*Count num of elems in separator*/
	if (*separator)
	{
		for (count = 0; separator[count] != '\0'; count++)
		{
			sep_count++;
		}
	}

	va_start(args, n);

	for (count = 0; count < n - 1; count++)
	{
		printf("%d", va_arg(args, const unsigned int));
		if (separator || separator[0] != '\0')
		{
			for (sep = 0; sep < sep_count; sep++)
			{
				printf("%c", separator[sep]);
			}
		}
	}
	printf("%d\n", va_arg(args, const unsigned int));

	va_end(args);
}
