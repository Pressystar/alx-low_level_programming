#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - write a file that allocates 1024 bytes for a buff
 * @file: the name of buffer at which file can be stored
 * Return: pointer to the allocated buff
 */
char *create_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) *1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
 * close_file - Entry point
 * @fd: close fle descriptor
 */
void close_file(int fd)
{
int g;
g = close(fd);

if (g == -1)
{
dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Entry point
 * @argv: an array of pointers
 * @argc: number of arguments
 * Return: 0
 * Description: if argument is incorrect , exit 97
 * if it does not exit or cannot be read exit 98
 * if it cannot be written exit 99
 * if file_to or file_from cannot be closed exit 100
 */
int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
r = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do
{
if (from == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

w = write(to, buffer, r);
if (to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
}
while (r > 0);
free(buffer);
close_file(from);
close_file(to);

return (0);
}
