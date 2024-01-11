#include "main.h"
/**
* _print_rev_recursion - prints string in reverse.
* @s: stores the string to be reversed.
*
* Return: Always success.
*/
void _print_rev_recursion(char *s)
{
	if (s[0])
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
