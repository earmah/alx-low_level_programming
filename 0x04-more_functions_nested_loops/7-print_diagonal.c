#include "main.h"
/**
 * print_diagonal - draws a diag line on terminal
 * @n: num of times the char \ shld print
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int pos, spc;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (pos = 0; pos < n; pos++)
		{
			for (spc = 0; spc < n; spc++)
			{
				if (pos == spc)
				{
					_putchar('\\');
				}
				else if (spc < pos)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
