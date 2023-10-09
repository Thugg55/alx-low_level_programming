#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory
 * @b: amount of memory to be allocated in bytes
 * Return: ptr
 */

void *malloc_checked(usigned int b)
{
	char *c;
	int *i;
	float *f;
	double *d;

	c = malloc(b);
	if (c == NULL)
		exit(98);

	i = malloc(b);
	if (i == NULL)
		exit(98);

	f = malloc(b);
	if (f == NULL)
		exit(98);
	
	d = malloc(b);
	if (f == NULL)
		exit(98);

	return(c);
}
