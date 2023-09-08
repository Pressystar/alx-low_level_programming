#include "main.h"


/**
 * create_file - Create a function that creates a file.
 * @filename: the numbers of file to create
 * @text_content: pointer to writeto th file
 * Return: if the function fails --1 / -1
 */
int create_file(const char *filename, char *text_content)
{
int fd, g, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
g = write(fd, text_content, len);

if (fd == -1 || g == -1)
return (-1);

close(fd);

return (1);
}
