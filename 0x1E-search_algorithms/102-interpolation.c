#inlcude "search_algos.h"

/**
 * interpolation_search - function searches by interpolation a target value
 * @array: Array (sorted) of elements to search for target value
 * @size: Total numbers of elements in the array
 * @value: Target value to search for
 * Return: return -1, if value is not present in array or array is null
 */


int interpolation_search(int *array, size_t size, int value)
{
	size_t a, l, h;

	l = 0;
	h = size - 1;
	while (h >= 1)
	{
		a = l + double(((a - array[l])(h - l)) / (array[h] - array[l]));
		if (a < size)
			printf("Value checked array[%ld] = [%d]", a, array[a]);
		else
			printf("Value checked array[%ld] is out of range", a);
	}
	if (array[a] == value)
		return (a);
	if (array[a] < value)
		l = i + 1;
	if (array[a] > value)
		h = i - 1;

	if (array == NULL || !array)
		return (-1);

	return (-1);
}
