#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compiled from.
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Name of source file: %s\n", __FILE__);

	return 0;
}
