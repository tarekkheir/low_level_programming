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
 *create_file - create a file
 *@filename: name of the file to create
 *@text_content: write into the file
 *Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
