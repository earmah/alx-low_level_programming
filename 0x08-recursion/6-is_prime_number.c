#include "main.h"

/**
 * prime_wrapper - calculates the mod of count and n
 * @count: counter to check if n is prime
 * @n: original int
 *
 * Return: result of mod calculation
 */

int prime_wrapper(int count, int n)
{
	int is_prime;

	/*Prime checker */
	is_prime = n % count;

	if (is_prime == 0)
	{
		return (0);
	}
	else if (count == 11)
	{
		return (1);
	}
	else
	{
		return (prime_wrapper(count + 1, n));
	}
}

/**
 * is_prime_number - check if a num is prime
 * @n: num to be evaluated
 *
 * Return: 1 if prime; 0 otherwise
 */

int is_prime_number(int n)
{
	int count = 3;

	/*Evaluate given number against ints 1 - 10 recursively*/

	if (n == 1 || n <= 0)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (prime_wrapper(count, n));
	}
}
