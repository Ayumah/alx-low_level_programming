#include "lists.h"
#include <stdio.h>
/**
* sum_listint - a function that returns the sum of all data(n)
*		of a listint_t
*
* @head: A pointer to the head of the listint_t list.
*
* Return: If the list is empty - 0.
*         Otherwise - sum data(n)..
*/
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
