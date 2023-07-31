#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list.
 * @h: pointer to linked lists
 * Return: number of nodes in list .
 */

size_t listint_len(const listint_t *h)
{
size_t count;
const listint_t *p;

if (h == NULL)
return (0);
p = h;
for (count = 0; p != NULL; p = p->next)
count++;

return (count);
}
