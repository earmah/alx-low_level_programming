#include <stdio.h>
/**
 * main - entry point
 * @void: emtpy
 *
 * Description - print all single digit nums in base 10
 * starting with 0; only use putchar
 * Return: 0
 */
int main(void)
{
	int val = 48;

	while (val < 58)
	{
		putchar(val);
		val++;
	}
	putchar('\n');
	return (0);
}
