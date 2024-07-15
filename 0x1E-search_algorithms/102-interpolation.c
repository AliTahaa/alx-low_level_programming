#include "search_algos.h"

/**
* interpolation_search -	function that searches for a value
* @array: array of integers
* @size: size of array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t l, m, h;

	l = 0;
	h = (int) size - 1;

	if (!array || size == 0)
		return (-1);
	while (array[l] != array[h] && value >= array[l] &&
	       value <= array[h])
	{
		m = l + (((double) (h - l) / (array[h] - array[l])) *
(value - array[l]));

		printf("Value checked array[%ld] = [%d]\n", m, array[m]);
		if (value > array[m])
			l = m + 1;
		else if (value < array[m])
			h = m - 1;
		else
			return (m);
	}
	m = l + (((double) (h - l) / (array[h] - array[l])) *
(value - array[l]));
	printf("Value checked array[%ld] is out of range\n", m);
	return (-1);
}
