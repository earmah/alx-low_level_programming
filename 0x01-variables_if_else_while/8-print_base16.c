#include <stdio.h>
/**
 * main - entry point
 * @void: empty
 *
 * Description - print all hexi vals in lwer case
 * Return: 0
 */

int main(void)
{
	int ch1_val = 48;
	int ch2_val = 97;

	while (ch1_val < 58)
	{
		putchar(ch1_val);
		ch1_val++;
	}
	while (ch2_val < 103)
	{
		putchar(ch2_val);
		ch2_val++;
	}
	putchar('\n');
	return (0);
}
