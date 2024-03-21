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
	if (*h == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while ((idx - 1) != 0)
	{
		if (temp)
		{
			idx--;
			temp = temp->next;
		}
		else
		{
			break;
		}
	}
	if (temp == NULL)
		return (NULL);
	new_node->next = temp->next;
	temp->next->prev = new_node;
	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);
}
