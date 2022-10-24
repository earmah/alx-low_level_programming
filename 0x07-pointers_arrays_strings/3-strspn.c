/**
 * _strspn - gets the length of a prefix substr
 * @s: initial str
 * @accept: substr prefix to look for
 * Return: number of bytes in s containing accept
 */

unsigned int _strspn(char *s, char *accept)
{
	/*Vars to count num of char in args, and num of matches */
	unsigned int count_cmp, len, acc_val, count_str = 0;

	for (count_cmp = 0; accept[count_cmp] != '\0'; count_cmp++)
	{
		/*num of char in accept arg */
		acc_val += 1;
	}
	/*printf("Number of char in accept: %d", acc_val);*/

	while (s[count_str] != 32)
	{
		count_cmp = 0;
		/*Iterate through accept and cmp each char with curr s*/
		for (count_cmp = 0; count_cmp <= acc_val; count_cmp++)
		{
			if (s[count_str] == accept[count_cmp])
			{
				len += 1;
			}
		}
		count_str++;
	}
	return (len);
}
