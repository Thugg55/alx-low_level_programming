#include "main.h"

/**
 * create_file - function creates a file.
 * @filename: Pointer to the file to be created
 * @text_content: Pointer to content written on file
 *
 * Return: if function fails -1.
 */
int create_file(const char *filename, char *text_content)
{
	int x, w, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(x, text_content, len);

	if (x == -1 || w == -1)
		return (-1);

	close(x);

	return (1);
}
