#include "search_algos.h"

/**
 * binary_search - function implement binary search
 * @array: An array of element to search
 * @size: Total number of elements in array
 * @value: element (value) to be search and found
 * Return: index where value is located
 * return -1 if value is not present or array is NULL
 */


int binary_search(int *array, size_t size, int value)
{
	size_t l, r, j;

	l = 0;
	r = size - 1;
	while (l <= r)
	{
		printf("Searching in array: ");
		for (j = l; j < r; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = l + ((r - l) / 2);
		if (array[j] < value)
			l = j + 1;
		else if (array[j] > value)
			r = j - 1;
		else
			return (j);
	}
	if (!array)
		return (-1);

	return (-1);
}
