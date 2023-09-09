#include"main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Write a program that copies the content of a file to another
 * @file: name of file buffer is storing
 * Return: pointer to newly allocated buff
 */
char *create_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer  == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}


/**
 * close_file - write a function that closes file descriptor
 * @fd: file descriptor
 */
void close_file(int fd)
{
int  g;

g = close(fd);

if (g == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Entry point
 * @argc: numbers of arguments
 * @argv: array of pointers
 * Return: 0
 * Description: if the argumentcount is ncorrect - exit code 97.
 * if file_from does not exiist or cannot be read - exit code 98.
 * if file_to cannot be created / written - exit code 99.
 * if file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int from, to, g, p;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
g = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (from == -1 || g == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

p = write(to, buffer, g);
if (to == -1 || p == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

g = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);

} while (g > 0);

free(buffer);
close_file(from);
close_file(to);


return (0);
}

