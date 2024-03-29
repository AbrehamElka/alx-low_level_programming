#include "main.h"
#include <stdlib.h>
/**
* free_grid - to free a previously allocated memory.
* @grid: the location to be freed.
* @height: the rows of the 2d array.
* Return: Nothing.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
