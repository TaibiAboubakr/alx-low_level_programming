#include "lists.h"
#include <string.h>

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to linked lists
 * Return: sum of all the data (n) or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t  *temp;

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
