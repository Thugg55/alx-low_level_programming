#include "main.h"

/**
 * read_textfile - function reads text file and prints it to POSIX stdout.
 * @filename: A pointer to the file.
 * @letters: A variable that displays the number of letters the function
 * should read and print.
 *
 * Return: 0, if the function fails or filenae is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	y = read(x, buf, letters);
	z = write(STDOUT_FILENO, buf, y);

	if (x == -1 || y == -1 || z == -1 || z != y )
	{
		free(buf);
		return(0);
	}

	free(buf);
	close(x);

	return (z);
}
