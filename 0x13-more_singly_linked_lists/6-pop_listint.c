#include "lists.h"
#include <string.h>

/**
 * pop_listint -function that deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to linked lists
 * Return:  head node’s data (n) or 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
int n;
listint_t *p;
if (!head || !(*head))
return (0);

n = (*head)->n;
p = (*head)->next;
free(*head);
*head = p;

return (n);
}
