#include "lists.h"
#include <stdio.h>

/**
* insert_nodeint_at_index - a function that inserts a new node
*				at a given position.
* @head: a pointer to the address of head of the linked list
* @idx: the index of the list where the new node should be added
* @n: the data for the new node
*
* Return: address of the new node or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	current = *head;

	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (new);
	}

	for (i = 1; i < idx; i++)
	{
		if (current == NULL || current->next == NULL)
			return (NULL);

		current = current->next;
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
