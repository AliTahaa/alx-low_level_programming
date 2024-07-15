#include "search_algos.h"

/**
* jump_search -	function that searches for a value
* @array: the array
* @size: size of array
* @value: value searched in array
* Return: return the index of value or -1
*/
int jump_search(int *array, size_t size, int value)
{
	int pre = 0, s = 0, length = (int) size;

	if (!array || size <= 0)
		return (-1);

	while (s < length && pre < length)
	{
		if (array[s] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", s, array[s]);
		pre = s;
		s += (int) sqrt(length);
	}
	printf("Value found between indexes [%d] and [%d]\n", pre, s);
	while (pre < length && pre <= s)
	{
		printf("Value checked array[%d] = [%d]\n", pre, array[pre]);
		if (array[pre] == value)
			return (pre);
		pre++;
	}
	return (-1);
}
