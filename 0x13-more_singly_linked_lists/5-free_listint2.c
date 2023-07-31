#include "lists.h"
#include <string.h>

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to linked lists
 */

void free_listint2(listint_t **head)

{
listint_t *temp;

if (!head || !(head))
return;

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
free(temp);
*head = NULL;

}
