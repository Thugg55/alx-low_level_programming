#include "search_algos.h"

/**
 * jump_search - function searches using jump search algos
 * @array: An array containing target value
 * @size: Total elements in array
 * @value: target element (value)
 * Return: if value is not present in array or array is null,
 *		return -1. if target value found return index.
 */


int jump_search(int *array, size_t size, int value)
{
	size_t j, a, b;

	j = a = 0;
	b = (int)floor(sqrt(size));
	while (a < size && array[a] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		j = a;
		a = a + b;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", j, a);

	a = a < size - 1 ? a : size - 1;
	for (; j < a && array[j] < value; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	}
	printf("Value checked array[%ld] = [%d]\n", j, array[j]);

	return (array[j] == value ? (int)j : -1);
}
