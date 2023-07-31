#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: pointer to the head of the linked list.
 * Return: the number of nodes in the list.
 */

size_t free_listint_safe(listint_t **h)
{
const listint_t *adress[200];
size_t count = 0;
listint_t *temp;
int i, j, check_loop = 0;


if ((*h) == NULL)
return (0);
temp = (*h);
for (i = 0; temp; i++)
{
adress[i] = temp;

for (j = 0; j < i; j++)
{
if (adress[j] == temp)
{
temp = NULL;
(*h) = NULL;
check_loop = 1;
}
}
if (check_loop == 0)
{
count++;
temp = (*h)->next;
free((*h));
(*h) = temp;
}
}

return (count);
}
