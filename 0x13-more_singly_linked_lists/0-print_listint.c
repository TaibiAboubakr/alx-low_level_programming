#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list.
 * @h: pointer to linked lists
 * Return: number of nodes in list .
 */

size_t print_listint(const listint_t *h)
{
size_t count;
const listint_t *p;

if (h == NULL)
return (0);
p = h;
for (count = 0; p != NULL; p = p->next)
{
printf("%d\n", p->n);
count++;
}

return (count);
}
