#include "lists.h"

/**
 * listint_len - Write a function that returns the number of elements
 * @h: type of linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t sum = 0;

while (h)
{
sum++;
h = h->next;
}
return (sum);
}
