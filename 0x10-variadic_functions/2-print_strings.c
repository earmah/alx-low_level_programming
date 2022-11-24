#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_strings - prints strings followed by new line
 * @separator: str to be printed in b/n each str
 * @n: num of str to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;
	char *temp_str;

	va_start(args, n);
	if (n > 0)
	{
		for (count = 0; count < n - 1; count++)
		{
			temp_str = va_arg(args, char *);
			if (!temp_str)
			{
				temp_str = "(nil)";
			}
			printf("%s", temp_str);
			if (separator)
			{
				printf("%s", separator);
			}
		}
		printf("%s\n", va_arg(args, char *));
	}
	else
	{
		printf("\n");
	}
	va_end(args);
}
