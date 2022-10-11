#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check if input is a digit
 * @c: input int
 * Return: 1 if it is 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
