#include "main.h"

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = n - i - 1;
		a[n - i - 1] = tmp;
	}
}
