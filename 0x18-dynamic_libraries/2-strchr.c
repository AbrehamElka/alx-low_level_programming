#include "main.h"
/**
 * _strchr - finds char in string
 *@s: pointer to first value
 *@c: second value
 *
 * Return: char as a result
 */
char *_strchr(char *s, char c)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return '\0';
}
