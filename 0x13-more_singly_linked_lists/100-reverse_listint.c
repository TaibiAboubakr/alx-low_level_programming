#include "lists.h"
#include <string.h>

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * index of a listint_t linked list.
 *@head: pointer to linked lists
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *suiv;

if (head == NULL || (*head) == NULL)
return (NULL);

suiv = NULL;
prev = NULL;
while ((*head) != NULL)
{
suiv = (*head)->next;
(*head)->next = prev;
prev = (*head);
(*head) = suiv;
}
(*head) = prev;
return ((*head));
}
