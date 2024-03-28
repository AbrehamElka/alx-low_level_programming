#include "main.h"
/**
 * print_line - it prints a blank line.
 * @n: the len of the line.
 *
 * Return: Nothing.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
