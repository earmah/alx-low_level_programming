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

	while (ch_val < 123)
	{
		putchar(ch_val);
		ch_val++;
	}
	putchar("\n");
	return (0);
}
