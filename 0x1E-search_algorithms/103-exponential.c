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
	size_t j, m, l = left, r = right;

	if (!array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: %d", array[l]);
		for (j = l + 1; j <= r; j++)
		{
			printf(", %d", array[j]);
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
 * exponetial_search - function searches for a key using an exponeential algorithm
 * @array: An array on elements conatining the key
 * @size: The total number of elements
 * @value: The key to be found
 * Return: return -1, if value is not present in array or if array is null
 *
 * Description: use powers of 2 as exponential rnges
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t j, n;

	if (array == NULL || !array)
		return (-1);
	if (array[0] == value)
		return (0);
	for (j = 0; j < size - 1 && array[j] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		j = j * 2;
	}

	n = j < size - 1 ? j : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", j / 2, n);
	return (bin_search_exp(array, j / 2, n, value));
}
