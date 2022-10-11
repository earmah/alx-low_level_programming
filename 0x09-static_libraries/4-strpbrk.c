/**
 * _strpbrk - locates first occurence of any bytes in a str
 * @s: str to be searched
 * @accept: str to match any byte of
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int count1 = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
			count1++;
		}
		while (count1 > 0)
		{
			accept--;
			count1--;
		}
		s++;
	}
	return ('\0');
}
