#include "lists.h"

/**
 * reverse_listint - function thatrReverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a, *b;

	if (head == NULL || *head == NULL)
		return (NULL);

	b = NULL;

	while ((*head)->next != NULL)
	{
		a = (*head)->next;
		(*head)->next = b;
		b = *head;
		*head = ahead;
	}

	(*head)->next = b;

	return (*head);
}
