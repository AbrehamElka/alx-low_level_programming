#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a string to be reversed
 */
void rev_string(char *s)
{
	int len, i, j;
	char c;

	i = 0;

	while (s[i] != '\n')
	{
		i++;
	}

	len = i - 1;
	j = 0;

	while (len > j)
	{
		c = s[j];
		s[j] = s[j - len];
		s[len] = c;
		j++;
	}
}
