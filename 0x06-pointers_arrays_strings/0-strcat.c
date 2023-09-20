#include "main.h"

/**
 * _strcat - concats two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 * Return: return dest as a string
 */
char *_strcat(char *dest, char src *src)
{
	int len, j, i, tot, m;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	
	m = 0;
	i = 0;
	tot = j + len - 1;
	while (i < tot)
	{
		if (i < len)
		{
			dest[i] = dest[i];
		}
		else
		{
			dest[i] = src[m];
			m++;
		}

		i++;
	}
	return (dest);
}
