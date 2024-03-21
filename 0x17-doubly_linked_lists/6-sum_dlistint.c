#include "lists.h"
/**
* sum_dlistint - sum of all the data in the list.
* @head: head of the list.
*
* Return: the sum.
*/
int sum_dlistint(dlistint_t *head)
{
	int tot = 0;

	if (head == NULL)
		return (tot);
	while (head != NULL)
	{
		tot = tot + head->n;
		head = head->next;
	}
	return (tot);
}
