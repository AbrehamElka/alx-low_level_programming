#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: a pointer to the array or NULL
 */
int *array_range(int min, int max)
{
    int *ptr, i;

    if (min > max)
        return (NULL);

    ptr = malloc(sizeof(int) * (max - min + 1));

    if (ptr == NULL)
        return (NULL);

    i = 0;
    for (; i <= (max - min); i++)
    {
        ptr[i] = min + i;
    }
    return (ptr);
}

