/**
 * _strstr - find first occurence of a substr in a str
 * @haystack: the str to be parsed
 * @needle: the substr to look for
 * Return: pointer to the beg of located substr in haystk
 */

char *_strstr(char *haystack, char *needle)
{
	char *hay;

	hay = haystack;

	while (*hay != '\0')
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (hay);
		}
	}
	return ('\0');
}
