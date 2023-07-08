#include"main.h"
/**
 * _strchr - write a program entry point
 * @b: input value
 * @c: input value
 * Return: Always 0
 */
char *_strchr(char *b, char c)
{
int a  = 0;

for (;b[a] >= '\0'; a++)
{
if (b[a] == c)
return (&b[a]);
}
return (0);
}
