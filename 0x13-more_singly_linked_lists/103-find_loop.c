#include "lists.h"

/**
 * find_listint_loop - function that prints a listint_t linked list.
 * @head: pointer to the head of the linked list.
 * Return: the number of nodes in the list.
 */

listint_t *find_listint_loop(listint_t *head)
{
const listint_t *adress[200] = {NULL};
int i = 0;

if (head == NULL)
return (0);

while (head)
{
while (adress[i])
i++;
adress[i] = head;
head = head->next;
if (i == 0)
continue;
for (i = 0; adress[i]; i++)
if (adress[i] == head)
return (head);
}
return (NULL);
}
