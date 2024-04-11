#include "search_algos.h"

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

