 #include"main.h"
#include<stdio.h>
#include<stdlib.h>


/**
 * array_range - Entry point
 * @min: input value
 * @max: input value
 * Return: input value
 */
int *array_range(int min, int max)
{
int *x, b = 0;

if (min > max)
return (NULL);

x = malloc((sizeof(int) * (max - min)) + sizeof(int));

if (x == NULL)
return (NULL);

while (min <= max)
{
x[b] = min;
b++;
min++;
}

return (x);
}
