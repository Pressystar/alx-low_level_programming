#include "main.h"

/**
 * print_binary - Write a function that prints the binary representation
 * @n: the numbers represented
 *
 */
void print_binary(unsigned long int n)
{
int g, count = 0;
unsigned long int curr;

for (g = 63; g >= 0; g--)
{
curr = n >> g;
if (curr & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
