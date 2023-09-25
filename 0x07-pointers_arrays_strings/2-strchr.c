#include "main.h"
/**
 * _strchr - finds char in string
 * @s: pointer to string
 * @c: pointer to char
 *
 * Retrurn: pointer to c in s
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
		else
		{
			s++;
		}
	}

	return ('\0');
}
