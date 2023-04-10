#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read textfile to print STDOUT
 * @filename: the textfile being read
 * @letters: number of letters to be read
 * Return: w actual number of bytes read and printed
 * 0 when the function fails or filename is null
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fs == -1)
		return (0);
	buf = malloc(sizeof(char) * leteers);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);
	return(w);
}
