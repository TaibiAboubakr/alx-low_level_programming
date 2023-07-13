#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * If new_size > old_size, the “added” memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, equivalent to malloc(new_size),
 *      for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL,
 *       then the call is equivalent to free(ptr). Return NULL
 * Return: the pointer to the newly created array , or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *rea;
/*new_size is equal to zero, and ptr is not NULL,*/
/* then the call is equivalent to free(ptr). Return NULL*/

if (new_size == 0 && ptr != NULL)
return (NULL);
/* //do not do anything and return ptr */
if (new_size == old_size)
return (ptr);

/* If ptr is NULL, then the call is equivalent to malloc(new_size),*/
if (ptr == NULL)
{
rea = malloc(new_size);
if (rea == NULL)
return (NULL);
return (rea);
}
/* If new_size > old_size, the “added” memory should not be initialized */
rea = malloc(new_size);
if (rea == NULL)
return (ptr);
memcpy(rea, ptr, old_size);
free(ptr);
return (ptr);
}
