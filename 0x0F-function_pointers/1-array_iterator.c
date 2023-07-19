#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>
/**
* array_iterator - function that executes a function given as a parameter
*                  on each element of an array.
* @array:pointer to an array
* @size: is the size of the array
* @action: is a pointer to the function you need to use
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || *action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
