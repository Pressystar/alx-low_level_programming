#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _strlen - find  the length
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 * *str_concat - Write a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
int size1, size2, x;
char *m;

if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";

size1 = _strlen(s1);
size2 = _strlen(s2);
m =  malloc((size1 + size2) *sizeof(char) + 1);
if (m == 0)
return (0);

for (x = 0; x <= size1 + size2; x++)
{
if (x < size1)
m[x] = s1[x];
else
m[x] = s2[x - size1];
}
m[x] = '\0';
return (m);
}
