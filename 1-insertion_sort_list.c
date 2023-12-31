#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using insertion sort algorithm
 * @list: pointer to pointer to doubly linked list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *previous;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (current = (*list)->next; current != NULL; current = current->next)
	{
		previous = current->prev;
		for (; previous != NULL && current->n < previous->n;
				previous = current->prev)
		{
			previous->next = current->next;
			if (current->next != NULL)
				current->next->prev = previous;
			current->next = previous;
			current->prev = previous->prev;
			if (previous->prev != NULL)
			{
				previous->prev->next = current;
			}
			else
			{
				*list = current;
			}
			if (previous != NULL)
				previous->prev = current;
			print_list(*list);
		}
	}
}
