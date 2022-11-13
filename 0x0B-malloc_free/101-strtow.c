#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * check_mal - checks if a recent malloc call was successful
 * @ptr: ptr to mal call
 *
 * Return: Null or ptr
 */

char *check_mal(char *ptr)
{
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

/**
 * char_count - counts the num of char in str
 * @s: str to parse
 * @n: index
 *
 * Return: num of char in word
 */
int char_count(char *s, int n)
{
	int count, char_cnt = 0;

	for (count = n; s[count] != ' '; count++)
	{
		char_cnt++;
	}
	return (char_cnt);
}

/**
 * strtow - splits a string into words
 * @str: string to pass
 *
 * Return: array
 */

char **strtow(char *str)
{
	char **str_arr = NULL;
	int index = 0, t = 0, count = 0, word_count = 0;
	int temp_word_ln;

	while (*(str + count)) /*Determine num of wrds in arr*/
	{
		if (*(str + count) != ' ')
		{
			word_count++;
			temp_word_ln = char_count(str, count);
			count += temp_word_ln; /*Temp used to alt countertonxt spc*/
		}
		count++;
	}
	if (*str == '\0' || *str == ' ' || str == NULL)
	{
		return (NULL);
	}
	str_arr = malloc(sizeof(char *) * (1 + word_count));
	check_mal(str_arr[0]);
	for (count = 0; str[count]; count++)
	{
		if (str[count] != ' ')
		{
			temp_word_ln = char_count(str, count);
			str_arr[index] = malloc(sizeof(char) * (1 + temp_word_ln));
			check_mal(str_arr[index]);
			for (t = 0; t < temp_word_ln; t++, count++)
			{
				str_arr[index][t] = str[count];
			}
			str_arr[index][t] = '\0';
			index++;
		}
	}
	str_arr[index] = '\0';
	return (str_arr);
}
