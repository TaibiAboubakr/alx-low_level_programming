#include "lists.h"
#include <string.h>

/**
 * add_node -function that adds a new node at the beginning of a list_t list.
 * @head: pointer to linked lists
 * @str: pointer to string
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{

list_t *p;
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
p->next = *head;
*head = p;

return (p);
}
