#include"main.h"
/**
 * _strncat -  write a function that concatenates two strings
 * @dest: entered value
 * @src: entered value
 * @n: entered value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int x;
int y;

x = 0;
while (dest[x] != '\0')
{
x++;
}
y = 0;
while (y < n && src[y] != '\0')
{
dest[n] = src[y];
x++;
y++;
}
dest [n] = '\0';
return (dest);
}
