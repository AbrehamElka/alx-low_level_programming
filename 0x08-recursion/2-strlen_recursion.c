#include "main.h"
/**
* _strlen_recursion - gives the length of a string.
* @s: the string to be measured.
*
* Return: the lengthe of a string(int).
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	return (i);
}
