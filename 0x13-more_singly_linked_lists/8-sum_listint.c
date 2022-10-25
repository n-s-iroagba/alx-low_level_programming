#include "lists.h"
/**
 *sum_listint - function
 *@head - listint_t params
 *Return: sum of a data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		{
			return (0);

		}

	temp = head;

	while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	return (sum);


}
