#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
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
	for (count = 0; separator[count] != '\0'; count++)
	{
		sep_count++;
	}

	va_start(args, n);

	for (count = 0; count < n - 1; count++)
	{
		printf("%u", va_arg(args, const unsigned int));
		if (*separator || *separator != '\0')
		{
			for (sep = 0; separator[sep] != '\0'; sep++)
			{
				printf("%c", separator[sep]);
			}
		}
	}
	printf("%u\n", va_arg(args, const unsigned int));

	va_end(args);
}
