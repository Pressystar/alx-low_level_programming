#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _realloc - Entry point
 * @ptr: input value
 * @old_size: input value
 * @new_size: input value
 * Return: input value
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *nptr;
unsigned int x;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);

return (nptr);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
nptr = malloc(new_size);

if (nptr == NULL)
return (NULL);
for (x = 0; x < old_size && x < new_size; x++)
{
nptr[x] = ((char *) ptr)[x];
				}
free(ptr);
return (nptr);
}

