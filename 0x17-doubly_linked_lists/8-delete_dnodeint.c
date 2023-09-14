#include "lists.h"


/**
 * delete_dnodeint_at_index - that deletes the node at index index of a
 * dlistint_t linked list.
 * @head: pointer to linked lists
 * @index: index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL || ((*head) == NULL && index != 0))
		return (-1);

	if (index == 0)
		{
		if ((*head)->next)
			{(*head) = (*head)->next;
			free((*head)->prev);
			(*head)->prev = NULL;
			}
		else
		{ free((*head));
		(*head) = NULL; }
		return (1);
		}
	temp = (*head);
	for (i = 0; temp->next; temp = temp->next, i++)
	{
		if (i == index)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
	}
	if (index == i)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	return (-1);
}
