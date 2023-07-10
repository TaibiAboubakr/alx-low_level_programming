#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return:pointer to a 2 dimensional array of integers, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i = 0, j = 0, k = 0;
if (width == 0 || height == 0)
return (NULL);
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (; k < i; k++)
free(grid[k]);

free(grid);
return (NULL);
}
for (; j < width; j++)
grid[i][j] = 0;

}
return (grid);
}
