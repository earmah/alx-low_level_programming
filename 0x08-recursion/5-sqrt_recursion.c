#include "main.h"

/**
 * recursion_wrapper - estimates sqrt root and calculates square rt
 * @lower_bd: lower bound estimation val
 *
 * Return: possible sqrt
 */
int recursion_wrapper(int lower_bd, int num)
{
	if (lower_bd * lower_bd == num)
	{
		return (lower_bd);
	}
	else if (lower_bd * lower_bd <= num)
	{
		/*Possibly next int produces correct num*/
		lower_bd += 1;
		return (recursion_wrapper(lower_bd, num));
	}
	else
	{
		/*In this case l_bd squared is greater than num; no natural root exists*/
		return (-1);
	}
}



/**
 * _sqrt_recursion - calculate natural sqrt of a number
 * @n: number to square
 *
 * Return: calculated sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (recursion_wrapper(2, n));
	}
}
