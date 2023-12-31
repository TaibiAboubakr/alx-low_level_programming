#include "main.h"
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers.
 * and initializes it with a specific char
 * The array created should contain all the values from min (included)
 * to max (included), ordered from min to max
 * If min > max, return NULL
 * If malloc fails, return NULL
 * @min: integer number to start
 * @max: integer number to end
 *  Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *ar;
int i = 0, j = 0;
if (min > max)
return (NULL);
ar = malloc(((max - min) + 1) * sizeof(int));
if (ar == NULL)
return (NULL);

for (i = min; i <= max; i++, j++)
ar[j] = i;
return (ar);
}
