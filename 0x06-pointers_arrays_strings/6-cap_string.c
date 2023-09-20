#include "main.h"

/**
 * cap_string - capitallize every word
 * @n: pointer to string
 * Return: caps of the string
 */
char *cap_string(char *n)
{
	int i, cap;

	cap = 32;

	char separators[] = {',', ';', '.', '?', '"',
			    '(', ')', '{', '}', ' ', '\n', '\t'};
	
	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}

		cap = 0;

		for (x = 0; x <= 12; x++)
		{
			if (n[i] == separators[x])
			{
				cap = 32;
				break;
			}
		}
	}

	return (n);
}
