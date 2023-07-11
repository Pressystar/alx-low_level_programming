#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _strlen - find the length of a string
 * @s: string
 * Return: integer
 */
int _strlen(char *s)
{
int size = 0;

for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 * *argstostr - description
 * @ac: integer
 * @av: arguments
 * Return: string on Success, NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int x = 0, nc = 0, y = 0, mpt = 0;
char *s;

if (ac == 0 || av == NULL)
return (NULL);

for (; x < ac; x++, nc++)
nc += _strlen(av[x]);

s = malloc(sizeof(char) * nc + 1);
if (s == 0)
return (NULL);
for (x = 0; x < ac; x++)
{
for (y = 0; av[x][y] != '\0'; y++, mpt++)
s[mpt] = av[x][y];

s[mpt] = '\n';
mpt++;
}
s[mpt] = '\0';
return (s);
}
