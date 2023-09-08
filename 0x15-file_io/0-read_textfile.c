#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Write a function that reads a text file and prints it t
 * @filename: the tsxt fle to be read
 * @letters: the numbers of letters that will be read
 * Return: g- the actual number of bytes read and printed
 * 0 when function failed or filename
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t g;
ssize_t t;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
g = write(STDOUT_FILENO, buf, t);

free(buf);
close(fd);
return (g);
}
