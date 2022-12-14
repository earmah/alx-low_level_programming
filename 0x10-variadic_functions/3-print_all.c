#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - prints all elements of differing types
 * @format: list of types of args passed to the fcn
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int count = 0;
	char temp_char;
	int temp_int;
	float temp_float;
	char *temp_str;

	va_start(args, format);
	while (format[count] != '\0')
	{
		switch (format[count])
		{
			case 'c':
				temp_char = va_arg(args, int);
				printf("%c", temp_char);

			case 'i':
				temp_int = va_arg(args, int);
				printf("%d", temp_int);

			case 'f':
				temp_int = va_arg(args,  double);
				printf("%f", temp_float);

			case 's':
				temp_str = va_arg(args, char *);
				if (temp_str)
				{
					printf("%s", temp_str);
				}
				if (!temp_str)
				{
					printf("(nil)");
				}
		}
		count++;
	}
}
