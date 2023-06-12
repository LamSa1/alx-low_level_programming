#include "main.h"

/**
 * append_text_to_file - Appends text .
 * @filname: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filname is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filname, char *text_content)
{
	int op, w, ln = 0;

	if (filname == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ln = 0; text_content[ln];)
			ln++;
	}

	op = open(filname, O_WRONLY | O_APPEND);
	w = write(op, text_content, ln);

	if (op == -1 || w == -1)
		return (-1);

	close(op);

	return (1);
}
