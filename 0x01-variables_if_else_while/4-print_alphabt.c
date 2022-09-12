#include <stdio.h>
/**
 * main - entry point
 * @void: empty
 *
 * Description - print alpha in lower w/o qe
 * Return: 0
 */
int main(void)
{
	int ch_val = 97;
	char nl = '\n';

	while (ch_val < 123)
	{
		if (ch_val == 101 || ch_val == 113)
		{
			ch_val++;
		}
		else
		{
			putchar(ch_val);
			ch_val++;
		}
	}
	putchar(nl);
	return (0);
}
