#include "lists.h"
#include <stdio.h>

/**
* add_nodeint_end - a function that adds a new node at
*			the end of a list
* @head: pointer to the address of head node of the list
* @n: number of elements in the list
*
* Return: The address of the new element, or
*		Null if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (*head);
}
