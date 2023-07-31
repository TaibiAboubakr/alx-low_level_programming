#include "lists.h"
#include <string.h>

/**
 * add_nodeint -function that adds a new node at the beginning of a list.
 * @head: pointer to linked lists
 * @n: integer number
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *p;
if (head == NULL)
return (NULL);

p = malloc(sizeof(listint_t));
if (p == NULL)
return (NULL);
p->n = n;
p->next = *head;
*head = p;

return (p);
}
