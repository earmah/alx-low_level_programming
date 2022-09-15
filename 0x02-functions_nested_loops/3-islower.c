#include "main.h"

/**
 * _islower - check is alpha is lower
 * @c: receives alpha
 * Return: 1 if lower
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
