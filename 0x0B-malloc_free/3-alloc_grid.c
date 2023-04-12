#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * @width: int value
 * @height: int value
 * Return: returns an array like grid
 * Description: The function returns a grid
 */
int **alloc_grid(int width, int height)
{
int **value;
int i = 0, x = 0;
if ((width == 0 || height == 0) || (width == -1 || height == -1))
{
return (NULL);
}

value = malloc(sizeof(int *) * height);

if (value == NULL)
{
free(value);
return (NULL);
}

for (i = 0; i < height; i++)
{
value[i] = malloc(sizeof(int) * width);
if (value[i] == NULL)
{
for (i--; i >= 0; i--)
{
free(value[i]);
}
free(value);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (x = 0; x < width; x++)
{
value[i][x] = 0;
}
}

return (value);
}
