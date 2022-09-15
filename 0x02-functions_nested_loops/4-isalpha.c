#include "main.h"

/**
 * _isalpha - checks for alphabetic letters
 * @c: received int
 * Return: 1 if lower or uppercase
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
