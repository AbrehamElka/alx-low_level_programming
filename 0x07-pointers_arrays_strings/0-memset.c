#include "main.h"

/**
 * _memset - a function that filles a memory
 * @s: the poiter to string
 * @b: pointer to the char
 * @n: pointer to a number
 *
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n);
{

	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
