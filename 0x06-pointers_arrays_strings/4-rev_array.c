#include "main.h"

/**
 * reverse_array - a function that reverses array
 * @a: pointer to array
 * @n: length of array
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
