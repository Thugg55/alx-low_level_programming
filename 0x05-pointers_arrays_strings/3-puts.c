#include "main.h"
/**
 *  * _puts - prints a string
 *   * @str: parameter
 *    * Return: null
 *     */

void _puts(char *str)
{
		int m;

			char *c;

				c = str;

					for (m = 0; c[m]; m++)
							{
										_putchar(c[m]);
											}
						_putchar('\n');
}
