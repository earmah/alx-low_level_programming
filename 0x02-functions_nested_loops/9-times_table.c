#include "main.h"

/**
 * times_table - prints times table
 * Return: void
 */
void times_table(void)
{
	int val_1 = 0;
	int val_2 = 0;
	int count;

	while (val_1 <= 9)
	{
		val_2 = 0;
		while (val_2 <= 9)
		{
			count = val_1 * val_2;
			if (val_2 == 0)
			{
				_putchar('0' + count);
			}
			else if (count < 10)
			{
				_putchar(' ');
				_putchar('0' + count);
			}
			else
			{
				_putchar('0' + count / 10);
				_putchar('0' + count % 10);
			}
			if (val_2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			val_2++;
		}
		_putchar('\n');
		val_1++;
	}
}

