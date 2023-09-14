#include "lists.h"


/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to doubly linked lists
 * @index: integer number that represent the index of node
 * Return: the nth node of a listint_t, Or NULL if the node does not exist,
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t  *temp;

if (!head)
return (NULL);

temp = head;
for (i = 0; temp && i < index; i++)
{
temp = temp->next;
if (!temp)
return (NULL);
}
return (temp);
}
