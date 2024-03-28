#include "main.h"
/**
 * print_diagonal - prints a diagonal.
 *
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = i; j >= 0; j--)
		{
			if (j == 0)
			{
				_putchar('\\');
				break;
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
