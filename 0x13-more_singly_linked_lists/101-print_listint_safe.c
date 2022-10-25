#include "lists.h"
/**
 *print_listint_safe - function
 *@head : listint_t
 *Return: size_t struct
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t count = 0;
	temp = head;

	if (head == NULL)
		exit(98);
	while (head != NULL)
		{
			count++;
			printf("[%p] %i\n", (void*) head, head->n);
			head = head->next;

		}
	return (count);

}
