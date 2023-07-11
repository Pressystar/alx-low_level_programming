#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *asa;
int x, y = 0;

if (str == NULL)
return (NULL);
x = 0; while (str[x] != '\0')
x++;
asa = malloc(sizeof(char) * (x + 1));

if (asa == NULL)
return (NULL);

for (y = 0; str[y]; y++)
asa[y] = str[y];
return (asa);
}

