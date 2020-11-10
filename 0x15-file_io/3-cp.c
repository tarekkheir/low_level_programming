#include "holberton.h"
/**
 *main - copy the content of the first argument into second
 *@ac: number of arguments
 *@av: arguments
 *Retrun: 0
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int ff, ft, nr, nw;

	if (argc != 3)
	{
		dprintf(2, "Usage : cp %s %s", argv[1], argv[2]);
		exit(97);
	}

	ff = open(argv[1], O_RDONLY);
	if (ff == -1)
	{
		dprintf(2, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}

	nr = read(ff, buffer, 1024);
	if (nr == -1)
	{
		close(ff);
		dprintf(2, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}

	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ft == -1)
	{
		close(ff);
		dprintf(2, "Error: Can't write to %s", argv[2]);
		exit(99);
	}

	nw = write(ft, buffer, nr);
	if (nw == -1)
	{
		close(ff);
		close(ft);
		dprintf(2, "Error: Can't write to %s", argv[2]);
		exit(99);
	}

	close(ff);
	close(ft);

	return(0);
}
