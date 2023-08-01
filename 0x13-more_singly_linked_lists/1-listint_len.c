#include"lists.h"
#include<stdio.h>
/**
 * listint_len - Write a function that returns the number of elements
 * @h: head pointer
 * Return: the actual number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t p = 0;

while (h != NULL)
{
h = h->next;
p++;
}
return (p);
}
