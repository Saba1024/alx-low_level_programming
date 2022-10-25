#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sum of the data in a linked list
 * @head: pointer to the headof the list
 *
 * Return: sum of all the data (n) or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
