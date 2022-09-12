#include <stdio.h>
/**
 * main - entry point
 * @void: empty
 *
 * Description - print all combos of single digits
 * Return: 0
 */

int main(void)
{
	int val = 48;
	int com = 44;
	int sp = 32;
	int count = 0;
	int temp = 0;

	putchar(val);
	val++;
	while (val < 58)
	{
		temp = com;
		while (count < 2)
		{
			putchar(temp);
			temp = sp;
			count++;
		}
		putchar(val);
		val++;
	}
	putchar('\n');
	return (0);
}
