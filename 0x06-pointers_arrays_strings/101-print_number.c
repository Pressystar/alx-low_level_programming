#include"main.h"

/**
 * print_number - Write a function that prints an integer.
 * @n: integer
 * Return: 0
 */

void print_number(int n)
{
unsigned int n1;

n1 = n;

if (n < 0)
{
_putchar('_');
n1 = -n;
}
if (n1 / 10 != 0)
{
Print_number(n11 / 10);
}
_putchar((n1 % 10) + '0');
}
