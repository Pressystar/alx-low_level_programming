#include<stdo.h>
#include"lists.h"

/**
 * list_len - Write a function that returns the number of elements
 * @h: pointer straight to the list_t
 * Return: elements in h
 */
size_t list_len(const list_t *h)
{
size_t p = 0;

while (h)
{
p++;
h = h->next;
}
return (p);
}
