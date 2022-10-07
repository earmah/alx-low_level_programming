#include "main.h"
/**
 * print_line - draws a straight line
 * @n: number of times _ should print
 *
 * Return: void
 */
void print_line(int n)
{
	int lnNum;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lnNum = 1; lnNum <= n; ++lnNum)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
