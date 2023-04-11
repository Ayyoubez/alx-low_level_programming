#include <stdlib.h>
#include "main.h"
/**
*free_grid - free the memory
*@grid: parameter
*@height: parameter
*Return: nothing tu return
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
