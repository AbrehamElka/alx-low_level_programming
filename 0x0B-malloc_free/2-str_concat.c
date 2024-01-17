#include "main.h"
#include <stdlib.h>
/**
* count_str - counts sizeof a string.
* @str: string to be counted.
*
* Return: the sizeof the string.
*/
unsigned int count_str(char *str)
{
	unsigned int i;

	if (str == NULL || str[0] == '\0')
	{
		return (0);
	}
	i = 0;
	for ( ; str[i] != '\0'; )
	{
		i++;
	}
	return (i);
}
/**
* str_concat - concatinates two strings on a new array.
* @s1: the first string.
* @s2: the second string.
*
* Return: the new concatenated string.
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, k, m;

	i = count_str(s1);
	j = count_str(s2);
	k = i + j;
	str = malloc((sizeof(char) * k) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	j = 0;
	m = 0;
	for ( ; m < k; )
	{
		if (m < i)
		{
			str[m] = s1[m];
		}
		else
		{
			str[m] = s2[j];
			j++;
		}
		m++;
	}
	str[k] = '\0';
	return (str);
}
