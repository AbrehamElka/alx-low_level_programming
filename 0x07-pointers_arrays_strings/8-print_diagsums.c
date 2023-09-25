#include "main.h"
#include <stdio.h>
/*
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to int array
 * @size: dimention of a
 */
void print_diagsums(int *a, int size)
{
	int i, k, l, m, sum1;
	
	l = size - 1;
	sum = 0;
	m = 0;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			if (k = i)
			{
				sum1 = sum1 + a[m];
			}
			if (k = l)
			{
				sum2 = sum2 += a[m];
			}
			m++;
		}
		l--;
	}

	printf("%d, %d\n", sum1, sum2); 

}
