#include "main.h"
/**
* _puts_recursion - prints string recursively.
* @s: stores the string to be printed.
*
* Return: void.
*/
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
