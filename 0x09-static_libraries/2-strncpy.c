#include"main.h"
/**
 * _strncpy - write a program that copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int q;

while (q  < n && src[q] != '\0')
{
dest[q] = src[q];
q++;
while (q < n)
{
dest[q] = '\0';
q++;
}
return (dest);
}
}
