#include "search_algos.h"

/**
 * linear_search - A function to linearly implement search
 * @array: an array of elements to be search
 * @size: total number of elements in array
 * @value: element(value) to search for
 * Return: first index where value is located, if value is
 * not present in array return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t j;

	j = 0;
	while (j < size)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		j++;
		if (array[j] == value)
			return (j);
	}

	if (!array)
		return (-1);
	return (-1);
}
