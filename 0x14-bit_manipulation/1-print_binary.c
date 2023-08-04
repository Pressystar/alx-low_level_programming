#include"main.h"

/**
* print_binary - Write a function that prints the binary representation
* @n: The numbers to print
*/
void print_binary(unsigned long int n)
{
int p, count = 0;
unsigned long int curr;

for (p = 63; p >= 0; p--)
curr = n >> p;
{
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
