#include <stdlib.h>
#include "main.h"
/**
*alloc_grid - function for a grid
*@width: parameter
*@height: parameter
*Return: grid
*/
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **new;

	if (width <= 0 || height <= 0)
		return (NULL);
	new = malloc(sizeof(int *) * height);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		new[i] = malloc(sizeof(int *) * width);
		if (new[i] == NULL)
		{
			for (; i >= 0; i--)
				free(new[i]);
			free(new);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			new[i][j] = 0;
	}
return (new);
}
