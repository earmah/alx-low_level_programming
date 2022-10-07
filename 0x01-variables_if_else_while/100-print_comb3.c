#include <stdio.h>
/**
 * main - entry point_ print num from 0 to 99
 *
 * Return: 0
 */

int main(void)
{
	int ones, tens;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = (tens + 1); ones <= '9'; ones++)
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
