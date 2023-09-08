#include "main.h"

/**
 * append_text_to_file - Write a function that appends text at the end
 * @filename: the pointer to the name
 * @text_content: string to add to the end
 * Return: if function fails or filename NULLS --1 / -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int p, g, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

p = open(filename, O_WRONLY | O_APPEND);
g = write(p, text_content, len);

if (p == -1 || g == -1)
return (-1);

close(p);

return (1);
}
