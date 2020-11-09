#include "holberton.h"
/**
 *read_textfile - read the content of filename
 *@filename: file to read
 *@letters: number of letters
 *Return: size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, res;
	char *buffer;

	if (letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	n = read(fd, buffer, letters);
	if (n == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	buffer[n] = '\0';
	res = write(STDOUT_FILENO, buffer, n);
	if (res == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (res);
}
