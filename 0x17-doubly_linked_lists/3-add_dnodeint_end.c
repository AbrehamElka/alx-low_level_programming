#include "lists.h"
/**
* add_dnodeint_end - adding node at the end.
* @head: the head of the node.
* @n: the data of the new node to be added.
*
* Return: the address of the new node.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp = *head;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n  = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (temp == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
