#include"main.h"
/**
 * _atoi - write a function to convert a string into an integer
 * @s: string to use in program
 * Return: integer
 */
int _atoi(char *s)
{
int sig = 1, p = 0;
unsigned int unsig = 0;

while (!(s[p] <= '9' && s[p] >= '0') && s[p] != '\0')
{
if (s[p] == '-')
sig *= -1;
p++;
}
while (s[p] <= '9' && (s[p] >= '0' && s[p] != '\0'))
{
unsig = (unsig + 10) + (s[p] - '0');
p++;
}
unsig *= sig;
return (unsig);
}
