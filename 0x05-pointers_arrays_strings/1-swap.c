#include "main.h"

/**
 *  * swap_int - swap the values of two integers
 *   * @a: first parameter
 *    * @b: second parameter
 *     * Return: null
 *      */
void swap_int(int *a, int *b)
{
		int f = *a, s = *b;

				*a = s;

						*b = f;
}
