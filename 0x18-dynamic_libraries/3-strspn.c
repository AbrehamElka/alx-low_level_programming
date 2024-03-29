#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *@s: pointer to string
 *@accept: second
 *
 * Return: int as result
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, k = 0;
	unsigned int n = 0;

	for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
				n++;
		}
		k = 0;
	}
	return (n);
}
