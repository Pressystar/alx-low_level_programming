#include "main.h"
#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - Write a function
 * that appends text at the end of a file.
 * @filename: ponter to the name
 * @text_content: pointer to the string
 * Return: negative - NULL if positive -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int p, w, count = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (count = 0; text_content[count];)
count++;
}
p = open(filename, O_WRONLY | O_APPEND);
w = write(p, text_content, count)

if (p == -1 || w == -1)
return (-1);

close(p);

return (1);
}

