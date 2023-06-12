#include "main.h"

/**
 * create_file - Creates a file.
 * @filname: A pointer to the name of the file.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filname, char *text_content)
{
	int f, w, ln = 0;

	if (filname == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	f = open(filname, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(f, text_content, ln);

	if (f == -1 || w == -1)
		return (-1);

	close(f);

	return (1);
}
