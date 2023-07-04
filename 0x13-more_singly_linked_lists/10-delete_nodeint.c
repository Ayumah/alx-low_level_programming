#include "lists.h"
#include <stdio.h>

/**
* delete_nodeint_at_index - a function that deletes a new node
*				at a given index.
* @head: a pointer to the address of head of the linked list
* @index: the index of the node that should be deleted
*
* Return: 1 on Success or -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *current;
	unsigned int i = 0;

	current = malloc(sizeof(listint_t));
	current = *head;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}
	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);
}
