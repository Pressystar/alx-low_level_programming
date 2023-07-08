#include"main.h"
/**
 * _strspn - Entry point
 * @s: input value
 * @accept: input value
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int g;

while (*s)
{
for (g = 0; accept[g]; g++)
{
if (*s == accept[g])
{
n++;
break;
}
else if (accept[g + 1] == '\0')
return (n);
}
g++;
}
return (n);
}
