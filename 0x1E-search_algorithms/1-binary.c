#include "search_algos.h"

/**
 * print_array - print an array
 * @array: the array
 * @left: left index
 * @right: right index
 */

void print_array(int *array, int left, int right)
{
	int i;

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - search for element in array
 * @array: the array
 * @size: size of the array
 * @value: the target value
 * Return: the index of the value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, m;

	if (!array || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);
		m = left + (right - left) / 2;

		if (array[m] > value)
			right = m - 1;
		else if (array[m] < value)
			left = m + 1;
		else
			return (m);
	}

	return (-1);
}
