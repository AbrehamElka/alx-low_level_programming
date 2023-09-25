#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes..
 *@s: pointer to first val
 *@accept: pointer to second val
 *
 * Return: char as a result
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		j = 0;
		s++;
	}
	return ('\0');
}
