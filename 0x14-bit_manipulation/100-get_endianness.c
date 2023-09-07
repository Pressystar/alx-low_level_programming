#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness
 * Return: 0 big / 1 little
 */
int get_endianness(void)
{
unsigned int g = 1;
char *c = (char *) &g;

return (*c);
}
