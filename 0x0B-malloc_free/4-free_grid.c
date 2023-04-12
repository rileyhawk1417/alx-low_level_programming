#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 * @grid: int value
 * @height: int value
 * Return: returns nothing
 * Description: The function frees up the grid
 * called by another function
 */
void free_grid(int **grid, int height)
{
if (grid != NULL && height != 0)
{
for (; height >= 0; height--)
{
free(grid[height]);
}
free(grid);
}
}
