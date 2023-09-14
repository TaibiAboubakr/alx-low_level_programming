#include "lists.h"
#include <string.h>

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: pointer to linked lists
 * Return: sum of all the data (n) or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t  *temp;

if (!head)
return (0);

temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
