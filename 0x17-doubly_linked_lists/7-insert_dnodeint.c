#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a node on a given index.
* @h: head of the list.
* @idx: the index to add it on.
* @n: the data of the new node.
*
* Return: address of the new node or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (idx > 1)
	{
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		idx--;
		temp = temp->next;
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);
}
