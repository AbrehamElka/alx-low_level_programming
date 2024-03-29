#include "main.h"
/**
 * print_triangle - prints a triangle.
 * @size: the base and the hight of the triangle
 *
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int i, j, w;

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}
		for (w = i; w > 0; w--)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
