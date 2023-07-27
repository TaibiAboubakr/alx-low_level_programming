#include "lists.h"
#include <string.h>

/**
 * free_list - function that frees a list_t list.
 * @head: pointer to linked lists
 */

void free_list(list_t *head)

{
list_t *temp;
if (!head)
return;

while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
free(temp);

}
