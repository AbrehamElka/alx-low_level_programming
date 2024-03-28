#include "main.h"
/**
 * print_numbers - print numbers from 0 to 10.
 *
 * Return: Nothing.
 */
void print_numbers(void)
{
	int i;
	char c = '0';

	for (i = 0; i < 10; i++)
		_putchar(c + i);
	_putchar('\n');
}
