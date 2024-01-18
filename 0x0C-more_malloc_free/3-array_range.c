#include "main.h"
#include <stdlib.h>
/**
* counter - countes the amount of numbers between two ranges.
* @min: first num.
* @max: second num.
*
* Return: the amount of num.
*/
int counter(int min, int max)
{
	int i;

	for (i = 0; min <= max; i++)
		min++;
	return (i);
}
/**
* array_range - creates malloc between two num ranges.
* @min: first num.
* @max: second num.
*
* Return: a newly allocated memory for the range.
*/
int *array_range(int min, int max)
{
	int i, k, *ptr;

	if (min > max)
		return (NULL);
	i = counter(min, max);
	ptr = malloc(i * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		ptr[k] = min;
		min++;
	}
	return (ptr);
}
