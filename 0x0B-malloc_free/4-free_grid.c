#include "holberton.h"
#include <stdlib.h>

/**
  *free_grid - Frees a 2 dimensional grid previously.
  *@grid: pointer to pointer.
  *@height: variable int.
  *Return: Pointer.
  */

void free_grid(int **grid, int height)
{
	int o;

	for (o = 0; o < height; o++)
	{
		free(grid[o]);
	}
	return (grid);
}
