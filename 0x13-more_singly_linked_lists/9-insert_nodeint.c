#include "lists.h"
#include <string.h>

/**
 * insert_nodeint_at_index - function that inserts a new node at a
 * given position.
 * @head: pointer to linked lists
 * @n: integer number
 * @idx: index to insert the node
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *p, *temp;
unsigned int i = 0;

if (head == NULL)
return (NULL);

p = malloc(sizeof(listint_t));
if (p == NULL)
return (NULL);
p->n = n;
if ((*head) == NULL)
{
p->next = NULL;
(*head) = p;
return (p);
}
if (idx == 0)
{
p->next = (*head);
(*head) = p;
return (p);
}
temp = (*head);
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
