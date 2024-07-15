#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted array
 * @list: pointer to the head of the list
 * @size: size of the list
 * @value: the value serched
 * Return: Null or index pointer
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, j;
	listint_t *left, *right;

	if (list == NULL || size == 0)
		return (NULL);

	left = list;
	i = sqrt(size);
	right = left;
	while (1)
	{

		for (j = 0; j < i && right; j++)
		{
			if (right->next)
				right = right->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", right->index, right->n);
		if (right->index == size - 1 || right->n >= value)
			break;
		else if (right->n < value)
			left = right;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", left->index, right->index);
	while (1)
	{
		printf("Value checked at index [%ld] = [%d]\n", left->index, left->n);
		if (left->n == value)
			return (left);
		if (right == left)
			break;
		if (left->next)
			left = left->next;
	}

	return (NULL);
}
