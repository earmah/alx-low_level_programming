#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks if char is uppercase
 * @c: int
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 65 || c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
