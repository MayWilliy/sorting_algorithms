#include "sort.h"

/**
 * swap_nodes - function that swap two nodes in a listint_t doubly linked list
 * @n1: pointer to the head
 * @n2: pointer to the first nodes
 * @n3: pointer to the second nodes to swap
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - function that sorts a doubly linked list of int
 * @list: poniter to the head of doubly linked listt of the int
 *
 * Description: This function print the list after each swap
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *magic, *box, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (magic =(*list)->next; magic != NULL; magic = tmp)
	{
		tmp = magic->next;
		box = magic->prev;
		while (box != NULL && magic->n <box->n)
		{
			swap_nodes(list, &box, magic);
			print_list((const listint_t *)*list);
		}
	}
}
