#include"main.h"
/**
 *  _memset - write a program that fills a block of memory
 * @x: starting address of memory to be filled
 * @y: the desired value
 * @n: number of bytes to be changed
 * Return: change array with
 */
char *_memset(char *s,  char b , unsigned int n)
{
int x = 0;

for (; n > 0; x++)
{
s[n] =  b;
n--;
}
return (s);
}
