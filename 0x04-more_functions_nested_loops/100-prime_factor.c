#include <stdio.h>
/**
 * sroot - find the squre root
 * @i: input num
 * Return: sqrt of i
 */

double _sroot(double i)
{
	float sqrt, tmp;

	sqrt = i / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (i / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime - finds and prints largest prime
 * @num: number to search
 */

void largest_prime(long int num)
{
	
	
	
	int prm_num, largest;

	while (num % 2 == 0)
	{
		num = num / 2;
	}
	
	for (prn_num = 3; prm_num <= _sroot(num); prm_num += 2)
	{
		while (num % prm_num == 0)
		{
			num = num / prm_num;
			largest = prm_num;
		}
	}

	if (num > 2)
	{
		largest = num;
	}
	printf("%d\n", largest);
}

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	largest_prime(612852475143);
	return (0);
}

