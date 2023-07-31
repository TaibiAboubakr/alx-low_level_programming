#include "lists.h"
#include <string.h>

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to linked lists
 */

void free_listint(listint_t *head)

{
listint_t *temp;
if (!head)
return;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
free(temp);

}
