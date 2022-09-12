#include <stdio.h>
/**
 * main - entry point
 * @void: empty
 *
 * Description: print alphabet using putchar
 * Return: 0 if successful
 */
int main(void)
{
	int ch_val = 97;
	int big_ch = 65;
	char nl = '\n';

	while (big_ch < 91)
	{
		putchar(big_ch);
		big_ch++;
	}
	while (ch_val < 123)
	{
		putchar(ch_val);
		ch_val++;
	}
	putchar(nl);
	return (0);
}
