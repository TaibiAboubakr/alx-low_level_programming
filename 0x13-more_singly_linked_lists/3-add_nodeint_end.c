#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end -function that adds a new node at the end of a listint_t.
 * @head: pointer to linked lists
 * @n: integer number
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *p, *temp;

if (head == NULL)
return (NULL);

p = malloc(sizeof(listint_t));
if (p == NULL)
return (NULL);
p->n = n;
p->next = NULL;
if (*head == NULL)
{
*head = p;
return (p);
}
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = p;
return (p);
}
