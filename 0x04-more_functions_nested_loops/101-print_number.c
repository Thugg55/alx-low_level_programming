#include "main.h"

/**
 * print_number - print an integer
 * @n: input integer.
 */

void print_number(int n)
{
	unsigned int m, f, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}
	f = m;
	count = 1;

	while (f > 9)
	{
		f /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
