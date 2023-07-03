#include"main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *p = haystack;
char *t = needle;

while (*p == *t && *t != '\0')
{
p++;
t++;
}
if (*t == '\0')
return (haystack);
}
return (0);
}
