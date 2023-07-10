#include "main.h"
#include <stdlib.h>
/**
 * *create_array -  function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: character to initialize the array
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i = 0;
p = (char *)malloc(size * sizeof(char));
if (p == NULL || size == 0)
return (NULL);

for (; i < size; i++)
{
p[i] = c;
}
return (p);
}
