#include "lists.h"
#include <string.h>

/**
 * add_node_end -function that adds a new node at the end of a list_t list.
 * @head: pointer to linked lists
 * @str: pointer to string
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{

list_t *p, *temp;

if (head == NULL)
return (NULL);

p = malloc(sizeof(list_t));
if (p == NULL)
return (NULL);
p->str = strdup(str);
if (p->str == NULL)
{
free(p);
return (NULL);
}

p->len = strlen(str);
p->next = NULL;
if (*head == NULL)
{
*head = p;
return (p);
}
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = p;
return (p);
}
