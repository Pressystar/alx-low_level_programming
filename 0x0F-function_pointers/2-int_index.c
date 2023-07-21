#include"function_pointers.h"
#include<stdio.h>

/**
 * int_index - Write a function that searches for an integer.
 * @array: array
 * @cmp: ponter to print
 * @size: size in an array
 * Return: NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int g;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (g = 0; g < size; g++)
{
if (cmp(array[g]))
return (g);
}
return (-1);
}
