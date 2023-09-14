#include "lists.h"


/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to linked lists
 * @n: integer number
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *p, *tmp;

	if (head == NULL)
		return (NULL);

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->prev = NULL;
	p->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = p;
		return (p);
	}
	tmp = (*head);
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = p;
	p->prev = tmp;

	return (p);
}
