#include "main.h"

/**
 *  * rev_string - function that reverses a string
 *   * @s: parameter
 *    * Return: null
 *     */
void rev_string(char *s)
{
		char *start_c, *end_c, c;
			int i, count;
				int length = 0;

					for (i = 0; s[i]; i++)
							{
										length++;
											}

						count = length;

							start_c = s;
								end_c = s;

									for (i = 0; i < count - 1; i++)
											{
														end_c++;
															}
										for (i = 0; i < count / 2; i++)
												{
															/* swap chracters */
															c = *end_c;
																	*end_c = *start_c;
																			*start_c = c;

																					/* update pointers positions */
																					start_c++;
																							end_c--;
																								}
}
