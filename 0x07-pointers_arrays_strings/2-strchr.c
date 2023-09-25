#include "holberton.h"
/**
 * _strchr - finds char in string
 *@s: pointer to first value
 *@c: second value
 *
 * Return: char as a result
 */
char *_strchr(char *s, char c)
{

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	return ('\0');
}
