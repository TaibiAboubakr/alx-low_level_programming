#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid 
 * previously created by your alloc_grid function.
 * @grid: pointer to 2D array
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{

int l = 0;
for (l = 0; l < height; l++)
free(grid[l]);
free(grid);

}
