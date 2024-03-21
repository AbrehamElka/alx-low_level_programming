#include "lists.h"
/**
* get_dnodeint_at_index - get a node at the index.
* @head: head of the linked list.
* @index: the node that is being searched,
*
* Return: the node if found NULL if not
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (index != 0)
	{
		if (head)
		{
			index--;
			head = head->next;
		}
		else
		{
			break;
		}
	}
	return (head);
}
