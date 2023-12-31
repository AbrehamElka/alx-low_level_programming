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

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;
	j = 0;

	while (len / 2 > j)
	{
		c = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = c;
		j++;
	}
}
