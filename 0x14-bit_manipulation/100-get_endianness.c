#include"main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 * Return: 0 if big & if small 1
 */
int get_endianness(void)
{
unsigned long int  bit = 1;
char *end = (char *)&bit;

if (*end == 1)
return (1);

return (0);
}
