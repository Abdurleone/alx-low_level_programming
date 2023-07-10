#include "main.h"

/**
 * create_file - Create a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *     Otherwise - 1.
*/

int createfile(const char *filename, char *text_content)
{
	int final_out = 0;
	int file = 0;
	int x = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + x) != '\0')
		{
			x++;
		}
		final_out = write(file, text_content, x);
	}
	if (final_out == -1 && final_out != x)
		return (-1);
	return (1);
}
