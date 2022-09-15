#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print num up ot 98
 * @a: starting num
 * Return: void
 */

void print_to_98(int a)
{
	if (a < 98)
	{
		while (a < 98)
		{
			printf("%d, ", a);
			a++;
		}
	}
	else if (a > 98)
	{
		while (a > 98)
		{
			printf("%d, ", a);
			a--;
		}
	}
	printf("98\n");
}
