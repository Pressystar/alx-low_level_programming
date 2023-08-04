#include"main.h"

/**
* print_binary - Write a function that prints the binary representation
* @n: The numbers to print
* Return: 0
*/
void print_binary(unsigned long int n)
{
int bit = sizeof(n) * 8, count = 0;

while (bit)
{

if (n & 1UL << --bit)
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
