#include "search_algos.h"

/**
  * linear_search - search for element in array
  * @array: the array
  * @size: size of the array
  * @value: the target value
  * Return: index of the value or -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
