#include"main.h"
/**
 * print_triangle - Write a function that prints a triangle,
 * @size: size of the triangle
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int m, n;
for (m = 1; m <= size; m++)
{
for (n = m; n < size; n++)
{
_putchar(' ');
}
for (n = 1; n <= m; n++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
