#include "lists.h"
#include <string.h>

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to linked lists
 * @index: integer number that represent the index of node
 * Return: the nth node of a listint_t, Or NULL if the node does not exist,
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t  *temp;

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
