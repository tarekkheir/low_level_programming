#include "holberton.h"
/**
 *_strlen - length of pointer
 *
 *@s: letter that we use
 *Return: always 0
 */
int _strlen(char *s)
{
	int size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}
/**
 *append_text_to_file - append text at the end of the file
 *@filename: name of the file
 *@text_content: string to add at the end
 *Return: integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		n = write(fd, text_content, _strlen(text_content));
		if (n == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
