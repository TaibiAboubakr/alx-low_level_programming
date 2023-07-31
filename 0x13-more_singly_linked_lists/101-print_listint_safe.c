#include "lists.h"

/**
* print_listint_safe - function that prints a listint_t linked list.
* @head: pointer to the head of the linked list.
* Return: the number of nodes in the list.
*/

size_t print_listint_safe(const listint_t *head)
{
const listint_t *adress[200];
size_t count = 0;
const listint_t *temp;
int i, j, check_loop = 0;


if (head == NULL)
return (0);
temp = head;

for (i = 0; temp; i++)
{
adress[i] = temp;
for (j = 0; j < i; j++)
{
if (adress[j] == temp)
{
printf("-> [%p] %d\n", (void *)temp, temp->n);
temp = NULL;
check_loop = 1;
}
}
if (check_loop == 0)
{
printf("[%p] %d\n", (void *)temp, temp->n);
count++;
temp = temp->next;
}
}

return (count);
}
