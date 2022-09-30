#include "main.h"
/**
 * _pow_recursion - calculates x raised to y
 * @x: base int
 * @y: power int
 * Return: power or -1
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
