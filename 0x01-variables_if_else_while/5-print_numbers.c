#include <stdio.h>
/**
 * main - entry point
 * @void: empty
 *
 * Description - print all single digit numbers of base 10
 * starting from 0
 * Return: 0
 */

int main(void)
{
	int val = 0;

	while (val < 10)
	{
		printf("%d", val);
		val++;
	}
	printf("\n");
	return (0);
}
