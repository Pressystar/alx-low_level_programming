#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Write a function that executes a function given
 * @array: array
 * @size: how many to print
 * @action: pinter to print
 * Return: NULL
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int g;
if (array == NULL || action == NULL)
return;
for (g = 0; g < size; g++)
{
action(array[g]);
}
}
