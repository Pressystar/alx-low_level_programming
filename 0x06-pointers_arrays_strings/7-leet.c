#include"main.h"

/**
 * leet - Write a function that encodes a string into 1337.
 * @n: input
 * Return: the value of n
 */
char *leet(char *n)
{
int m, p;
char s1[] = "aAeEoOtTll";
char  s2[] = "4433997711";

for (m = 0; n[m] != '\0'; m++)
{
for (p = 0; p < 10; p++)
{
if (n[m] == s1[p])
{
n[m] = s2[p];
}
}
}
return (n);
}

