#include "main.h"
/**
* _puts_recursion - prints string recursively.
* @s: stores the string to be printed.
*
* Return: void.
*/
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}

	_putchar('\n');
}
