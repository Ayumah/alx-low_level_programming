#include "lists.h"

/**
 * get_nodeint_at_index - returns a given node of a listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node starting at 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

