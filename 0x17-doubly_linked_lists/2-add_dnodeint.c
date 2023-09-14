#include "lists.h"


/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to linked lists
 * @n: integer number
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

dlistint_t *p;
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
p->next = (*head);
p->prev = NULL;
(*head)->prev = p;
(*head) = p;

return (p);
}
