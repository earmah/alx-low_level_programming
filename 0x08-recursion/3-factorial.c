#include "main.h"
/**
 * factorial - calculates the factorial of int
 * @n: int param
 * Return: int factorial
 */

int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
