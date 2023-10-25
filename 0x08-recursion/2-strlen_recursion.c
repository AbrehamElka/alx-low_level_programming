#include "main.h"
/**
 * _strlen_recursion: length of a string
 * @s: string
 *
 * Return: the len of string
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if(*s != 0)
	{
		int _strlen_recursion(s + 1);
		len++;
	}

	return len;
}
