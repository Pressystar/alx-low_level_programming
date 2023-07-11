#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars
 * @size: size of array
 * @c: char to assign
 * Description: create array of size assign char c
 * Return: pointer to array,NULL if failed
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int x;

str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);

for (x = 0; x < size; x++)
str[x] = c;
return (str);
}
