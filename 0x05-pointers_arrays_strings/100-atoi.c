#include"main.h"
/**
 * _atoi - Write a function that convert a string to an integer.
 * @s: The pointer to convert
 * Return: the int converted from the tring
 */
int _atoi(char *s)
{
int c = 0;
unsigned int ni = 0;
int min = 1;
int iso = 0;
while (s[c])
{
if (s[c] == 45)
{
min *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
iso = 1;
ni = (ni * 10) + (s[c] - '0');
c++;
}
if (iso == 1)
{
break;
}
c++;
}
ni *= min;
return (ni);
}
