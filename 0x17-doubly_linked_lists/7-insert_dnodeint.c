#include "lists.h"


/**
 * insert_dnodeint_at_index - function that inserts a new node at a
 * given position.
 * @h: pointer to linked lists
 * @n: integer number
 * @idx: index to insert the node
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *p, *temp;
unsigned int i = 0;

if (h == NULL)
return (NULL);

p = malloc(sizeof(dlistint_t));
if (p == NULL)
return (NULL);
p->n = n;
if ((*h) == NULL)
{
p->next = NULL;
(*h) = p;
return (p);
}
if (idx == 0)
{
p->next = (*h);
(*h) = p;
return (p);
}
temp = (*h);
while (temp)
{
if (i == idx - 1)
{
p->next = temp->next;
temp->next = p;

return (p);
}
i++;
temp = temp->next;
}

return (NULL);
}
