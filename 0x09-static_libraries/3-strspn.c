/**
 * _strspn - gets the length of a prefix substr
 * @s: initial str
 * @accept: substr prefix to look for
 * Return: number of bytes in s containing accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int count, r, c;

	count = 0;
	while (s[count] != '\0')
	{
		r = 0;
		c = 0;
		while (accept[r] != '\0')
		{
			if (s[count] == accept[r])
			{
				c = 0;
				break;
			}
			r++;
		}
		if (c == 1)
		{
			break;
		}
		count++;
	}
	return (count);
}
