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
	dlistint_t *p, *temp = (*h);
	unsigned int i = 0;

	if (h == NULL || ((*h) == NULL && idx != 0))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; temp->next; temp = temp->next, i++)
	{
		if (i == idx - 1)
		{
			p = malloc(sizeof(dlistint_t));
			if (p == NULL)
				return (NULL);
			p->n = n;
			p->next = temp->next;
			p->prev = temp;
			temp->next->prev = p;
			temp->next = p;
			return (p);
		}
	}
	if (idx == i + 1)
		return (add_dnodeint_end(h, n));

	return (NULL);
}
