#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - allocates 2d array.
* @width: num columens of the array.
* @height: num of rows of the array.
*
* Return: new allocated 2d array.
*/
int **alloc_grid(int width, int height)
{
	int **arr, i, j, m;

	arr = (int **) malloc(height * sizeof(int *));
	if (arr == NULL || height == 0 || width == 0)
	{
		free(arr);
		return (NULL);
	}
	i = 0;
	for ( ; i < height; )
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (m = 0; m < i; m++)
				free(arr[m]);
			free(arr);
			return (NULL);
		}
		i++;
	}
	i = 0;
	for ( ; i < height; )
	{
		j = 0;
		for ( ; j < width; )
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
