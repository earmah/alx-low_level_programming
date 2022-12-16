#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_char - prints character;
 * @args: variadic function elements
 *
 * Return: void
 */

void print_char(va_list args)
{
	char temp_char;

	temp_char = va_arg(args, int);
	printf("%c", temp_char);
}

/**
 * print_int - prints integers;
 * @args: variadic function elements
 *
 * Return: void
 */

void print_int(va_list args)
{
	int temp_int;

	temp_int = va_arg(args, int);
	printf("%d", temp_int);
}

/**
 * print_float - prints floats
 * @args: variadic function elements
 *
 * Return: void
 */
void print_float(va_list args)
{
	float temp_float;

	temp_float = va_arg(args, double);
	printf("%f", temp_float);
}

/**
 * print_str - prints strings
 * @args: variadic functions elements
 *
 * Return: 0 on success
 */
int print_str(va_list args)
{
	char *temp_str;

	temp_str = va_arg(args, char *);
	if (!temp_str)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", temp_str);
	return (0);
}

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

	while (!format)
	{
		printf("\n");
		exit(0);
	}
	va_start(args, format);
	while (format[count] != '\0')
	{
		switch (format[count])
		{
			case 'c':
				print_char(args);
				break;

			case 'i':
				print_int(args);
				break;

			case 'f':
				print_float(args);
				break;

			case 's':
				print_str(args);
				break;
		}
		if (format[count + 1] != '\0' && (strchr("cifs", (char) format[count])))
		{
			printf(", ");
		}
		count++;
	}
	va_end(args);
	printf("\n");
}
