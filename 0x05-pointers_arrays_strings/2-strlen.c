#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: pointer to first value
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int c;

	c=0;

	while(s[c] != '\0')
	{
		c++;
	}

	return (c);
}
