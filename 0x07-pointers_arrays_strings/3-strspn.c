#include "main.c"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to first value
 * @accept: pointer to second
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, k;
	unsigned int n;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				(break);
			}

			if (accept[k + 1] == '\0')
			{
				n = (unsigned int) i;
				return (n);
			}

		}
	}

	n = 0;

	return (n);
}
