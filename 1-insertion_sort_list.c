#include "sort.h"

/**
 * swaping - ======
 * @head: =======
 * @first: ========== 
 * @second: ========= 
 */

void swaping(listint_t **head, listint_t **first, listint_t *second)
{
	(*first)->next = second->next;
	if (second->next != NULL)
		second->next->prev = *first;
	second->prev = (*first)->prev;
	second->next = *first;
	if ((*first)->prev != NULL)
		(*first)->prev->next = second;
	else
		*head = second;
	(*first)->prev = second;
	*first = second->prev;
}

/**
 * insertion_sort_list - =========
 * @list: ======
 * Description: ======
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iterate, *in, *t;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iterate = (*list)->next; iterate != NULL; iterate = t)
	{
		t = iterate->next;
		in = iterate->prev;
		while (in != NULL && iterate->n < in->n)
		{
			swaping(list, &in, iterate);
			print_list((const listint_t *)*list);
		}
	}
}
