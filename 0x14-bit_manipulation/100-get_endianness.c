#include"main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 * Return: 0 if big & if small 1
 */
int get_endianness(void)
{
unsigned long int  p = 1;

return (*(char *)p);
}
