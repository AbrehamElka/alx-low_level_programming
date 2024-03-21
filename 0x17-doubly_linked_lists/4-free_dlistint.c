#include "lists.h"
/**
* free_dlistint - freeing a double linked list.
* @head: the head of the list.
*
* Return: Nothing.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
