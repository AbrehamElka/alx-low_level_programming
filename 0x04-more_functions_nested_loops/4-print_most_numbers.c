#include "main.h"
/**
 * print_most_numbers - print 0-9 except 2 and 4
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	int i;
	char c = '0';

	for (i = 0; i < 10; i++)
	{
		if (c == '2' || c == '4')
			continue;
		_putchar(c + i);
	}
}
