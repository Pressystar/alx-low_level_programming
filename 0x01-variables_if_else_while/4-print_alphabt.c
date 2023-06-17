#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
int lowerCase = 'd';
while
(lowerCase <= 'z')
{
if
(lowerCase == 'e' || lowerCase == 'q')
{
lowerCase += 1;
}
else
{
putchar (lowerCase);
lowerCase += 1;
}
}
putchar('\n');
return (0);
}
