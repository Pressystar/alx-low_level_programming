#include"main.h"
/**
 * _strstr - Entry point
 * @haystack: input value
 * @needle: input value
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *i = haystack;
char *j = needle;

while (*i == *j != '\0')
{
i++;
j++;
}
if (*j == '\0')
return (haystack);
}
return (0);
}
