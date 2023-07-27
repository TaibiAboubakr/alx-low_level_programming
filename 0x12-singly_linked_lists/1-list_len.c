#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list.
 * @h: pointer to linked lists
 * Return: number of element in list .
 */

size_t list_len(const list_t *h)
{
size_t count;
const list_t *p;
if (h == NULL)
return (0);

p = h;
for (count = 0; p; p = p->next)
count++;
return (count);
}
