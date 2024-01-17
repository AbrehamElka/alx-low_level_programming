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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = count_str(s1) + 1;
	j = count_str(s2) + 1;
	k = i + j;
	str = malloc(sizeof(char) * k);
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
			s[m] = s1[m];
		}
		else
		{
			s[m] = s2[j];
			j++;
		}
		m++;
	}
}
}
