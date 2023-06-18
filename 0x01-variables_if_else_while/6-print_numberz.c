#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 * Description: Print number of bse 10 using putchar'
 */
int main(void)
{
int w;
for (w = 0; w <= 9; w++)
{
putchar(w + 48);
}
putchar('\n');
return (0);
}
