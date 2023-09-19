#include <stdio.h>
#include "main.h"

/**
 * print_array - prints arrays elements
 * @a: pointer to array
 * n: num of arrayes to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}

	printf("\n");
}
