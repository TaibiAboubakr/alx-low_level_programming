#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: pointer to doubly linked lists
 * Return: number of elements in list .
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t count;
const dlistint_t *p;

if (h == NULL)
return (0);
p = h;
for (count = 0; p != NULL; p = p->next, count++)
printf("%d\n", p->n);

return (count);
}
