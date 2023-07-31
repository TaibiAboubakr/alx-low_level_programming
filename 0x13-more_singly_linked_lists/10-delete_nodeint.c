#include "lists.h"
#include <string.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to linked lists
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

listint_t *p, *temp;
unsigned int i = 0;

if (head == NULL)
return (-1);


if ((*head) == NULL)
return (-1);

temp = *head;
if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}
while (temp)
{
if (i == index - 1)
{
p = temp->next;
temp->next = p->next;
free(p);
return (1);
}
i++;
temp = temp->next;
}
return (-1);
}
