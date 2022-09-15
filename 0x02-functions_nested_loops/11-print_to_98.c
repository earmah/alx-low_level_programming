#include "main.h"

/**
 * print_to_98 - print num up ot 98
 * @a: starting num
 * Return: void
 */

void print_to_98(int a)
{
	printf("%d", a)
	if (a < 98)
	{
		while (a <= 98)
		{
			a++;
			printf(", %d",a);
		}
	}
	else if (a > 98)
	{
		while (a >= 98)
		{
			a--;
			printf(", %d", a);
		}
	}
	else
	{
		printf("");
	}
	printf("\n");
}
