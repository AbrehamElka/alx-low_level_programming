#include "main.h"

/**
 * cap_string - capitallize every word
 * @n: pointer to string
 * Return: caps of the string
 */
char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i + 1] == ' ' || n[i + 1] == '\n')
		{
			n[i + 2] = n[i + 2] -32;
			n = n + 2;
			continue;
		}
	}

	return (n);
}
