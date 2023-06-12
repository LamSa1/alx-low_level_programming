#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t m;
	ssize_t w;
	ssize_t a;

	m = open(filename, O_RDONLY);
	if (m == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	a = read(m, b, letters);
	w = write(STDOUT_FILENO, b, a);

	free(b);
	close(m);
	return (w);
}
