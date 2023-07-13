#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size in bytes of each element
 * Return:  returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
int  i = 0, b = nmemb * size;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(b);
if (p == NULL)
return (NULL);

for (i = 0; i < b; i++)
p[i] = 0;
return (p);
}
