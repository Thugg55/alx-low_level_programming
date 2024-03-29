#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer
 * if max > min, return NULL
 * if malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		a[i] = min;

	return (a);
}
