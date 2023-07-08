#include"main.h"
/**
 * _memcpy - write a function that copies a memory
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: bytes
 * Return: memory copied with a byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int q = 0;
int j = n;

for (; q < j; q++)
{
dest[q] = src[q];
n--;
}
return (dest);
}


