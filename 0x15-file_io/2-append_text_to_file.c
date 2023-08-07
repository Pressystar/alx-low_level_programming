#include "main.h"

/**
 * append_text_to_file - Write a function that appends text at the end of a file.
 * @filename: ponter to the name
 * @letters: pointer to the string
 * Return: negative - NULL if positive -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int p, w, count = 0;

if (filename == NULL)
return (-1);

if (txtcontent != NULL)
{
for (count = 0; text_content[count];)
count ++;
}
o = open(filename, O_WRONGLY | O_APPEND);
w = writ(o, text_content, count)

if (o == -1 || w == -1)
return (-1);

close(o);

return (1);
}

