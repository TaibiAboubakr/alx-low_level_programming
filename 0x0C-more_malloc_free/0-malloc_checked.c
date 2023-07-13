#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked -   function that allocates memory using malloc.
 * @b: size in bytes
 * Return: a pointer to the allocated memory,
 * if fails normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
char *ptr;
if (b == 0)
return (NULL);
ptr = (void *)malloc(b);
if (ptr == NULL)
exit(98);

return (ptr);
}
