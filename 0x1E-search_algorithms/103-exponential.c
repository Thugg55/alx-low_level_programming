#include "search_algos.h"

/**
 * bin_search_exp - Implement binary search for exponential search
 * @array: Array to be searched
 * @left: left index of array
 * @right: right index of array
 * @value: Value to search for
 * Return: First index where value is located or -1
 */
int bin_search_exp(int *array, size_t left, size_t right, int value)
{
	size_t i, m, l = left, r = right;

	if (!array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: %d", array[l]);
		for (i = l + 1; i <= r; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		/* Computation */
		m = floor((l + r) / 2);
		if (value > array[m])
			l = m + 1;
		else if (value < array[m])
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}


/**
 * exponential_search - Implement binary search
 * @array: Array to be searched
 * @size: Size of array
 * @value: Value to search for
 * Return: First index where value is located or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, n;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < size - 1 && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	n = i < size - 1 ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, n);
	return (bin_search_exp(array, i / 2, n, value));
}
